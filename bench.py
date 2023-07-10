import subprocess
import os
import glob
import click
import csv


plugin_path = "/home/nn/protoc-gen-scip/protoc-gen-scip"
convert_path = "/home/nn/protoc-gen-scip/convert/convert"
base_path = os.getcwd()


def monitor(cmd: list, log_file: str, interval: float):
    psrecord_cmd = ["psrecord", str(subprocess.Popen(
        cmd).pid), "--log", log_file, "--interval", str(interval)]
    subprocess.run(psrecord_cmd)
    cpu, mem = parse_psrecord_log(log_file)
    print(f"Time: {cpu}s, Memory: {mem}MB")
    return cpu, mem


def parse_psrecord_log(log_file):
    cpu_times = []
    memory_usage = []

    with open(log_file, "r") as f:
        lines = f.readlines()
        lines = lines[1:]
        for line in lines:
            values = line.split()
            if len(values) == 4:
                elapsed_time = float(values[0])
                real_memory = float(values[2])
                cpu_times.append(elapsed_time)
                memory_usage.append(
                    real_memory)
    if len(cpu_times) == 0 or len(memory_usage) == 0:
        return 0, 0
    return max(cpu_times), max(memory_usage)


def gen_go_scip(module_root: str, project_root: str, output_file: str):
    return ["scip-go", f"--module-root={module_root}", f"--project-root={project_root}", f"--output={output_file}"]


def gen_ts_scip(project_root, output_file):
    return ["scip-typescript", "index", project_root, "--output", output_file]


def gen_py_scip(project_root, output_file):
    os.chdir(base_path+"/"+project_root)
    return ["scip-python", "index", './', "--project-name", project_root, "--output", output_file]


def gen_java_scip(project_root):
    os.chdir(base_path+"/"+project_root)
    return ["make"]


def gen_ts():
    monitor(gen_ts_scip("Ts_A", "tsa.scip"), "/tmp/11111.log", 0.01)
    monitor(gen_ts_scip("Ts_B", "tsb.scip"), "/tmp/11111.log", 0.01)
    monitor(gen_ts_scip("Ts_C", "tsc.scip"), "/tmp/11111.log", 0.01)


def gen_py():
    monitor(gen_py_scip("Python_A", "pya.scip"), "/tmp/11111.log", 0.01)
    monitor(gen_py_scip("Python_B", "pyb.scip"), "/tmp/11111.log", 0.01)
    monitor(gen_py_scip("Python_C", "pyc.scip"), "/tmp/11111.log", 0.01)
    os.chdir(base_path)
    subprocess.run(['mv', 'Python_A/pya.scip', "."])
    subprocess.run(['mv', 'Python_B/pyb.scip', "."])
    subprocess.run(['mv', 'Python_C/pyc.scip', "."])


def gen_go():
    monitor(gen_go_scip('Go_A', 'Go_A', 'goa.scip'), "/tmp/11111.log", 0.01)
    monitor(gen_go_scip('Go_B', 'Go_B', 'gob.scip'), "/tmp/11111.log", 0.01)
    monitor(gen_go_scip('Go_C', 'Go_C', 'goc.scip'), "/tmp/11111.log", 0.01)


def gen_java():
    monitor(gen_java_scip("Java_A"), "/tmp/11111.log", 0.01)
    monitor(gen_java_scip("Java_B"), "/tmp/11111.log", 0.01)
    monitor(gen_java_scip("Java_C"), "/tmp/11111.log", 0.01)
    os.chdir(base_path)


def total():
    # The command you want to execute
    proto_files = glob.glob('protos/*.proto')
    command = [
        "protoc",
        f"--plugin={plugin_path}",
        "--scip_out=./",
        f"--scip_opt=scip_dir=./,sourceroot={base_path},out_file=total.scip",
        "-I",
        ".",
    ] + proto_files
    return monitor(command, "/tmp/111111.log", 0.01)


def tidy():
    file = []
    file.extend(glob.glob('*.log'))
    file.extend(glob.glob('*.scip'))
    file.extend(glob.glob('*.lsif'))

    for file_name in file:
        try:
            os.remove(file_name)
        except OSError as e:
            print(f"Error: {file_name} : {e.strerror}")


@click.group()
def cli():
    pass


@cli.command()
def gen_simple_scip():
    """This command generate the base scip index file of Python, Java, Go, C++, Typescipt projects."""
    click.echo('Begin to generate...')
    click.echo('Generating Typescript SCIP index...')
    gen_ts()
    click.echo('Generating Java SCIP index...')
    gen_java()
    click.echo('Generating Go SCIP index...')
    gen_go()
    click.echo('Generating Python SCIP index...')
    gen_py()
    click.echo('Done!')


@cli.command()
def gen_merged_scip():
    """This command merge and add relationshiops between the base scip index file of Python, Java, Go, C++, Typescipt projects and proto files."""
    click.echo('Generating merged SCIP index...')
    total()
    click.echo('Done!')


@cli.command()
def clean():
    """This command remove the benchmark testing files"""
    tidy()


@cli.command()
def convert():
    monitor([convert_path, "convert", "--from",
            "total.scip"], "/tmp/11111.log", 0.01)


@cli.command()
def performance_merge_every():
    perf = {}
    num = 1
    perf['Ts_A'] = []
    perf['Ts_A_m'] = []
    tidy()
    for _ in range(num):
        perf['Ts_A'].append(
            monitor(gen_ts_scip("Ts_A", "tsa.scip"), "/tmp/11111.log", 0.01))
        perf['Ts_A_m'].append(total())

    perf['Ts_B'] = []
    perf['Ts_B_m'] = []
    tidy()
    for _ in range(num):
        perf['Ts_B'].append(
            monitor(gen_ts_scip("Ts_B", "tsb.scip"), "/tmp/11111.log", 0.01))
        perf['Ts_B_m'].append(total())

    perf['Ts_C'] = []
    perf['Ts_C_m'] = []
    tidy()
    for _ in range(num):
        perf['Ts_C'].append(
            monitor(gen_ts_scip("Ts_C", "tsc.scip"), "/tmp/11111.log", 0.01))
        perf['Ts_C_m'].append(total())

    perf['Python_A'] = []
    perf['Python_A_m'] = []
    tidy()
    for _ in range(num):
        perf['Python_A'].append(
            monitor(gen_py_scip("Python_A", "pya.scip"), "/tmp/11111.log", 0.01))
        perf['Python_A_m'].append(total())
    perf['Python_B'] = []
    perf['Python_B_m'] = []
    tidy()
    for _ in range(num):
        perf['Python_B'].append(
            monitor(gen_py_scip("Python_B", "pyb.scip"), "/tmp/11111.log", 0.01))
        perf['Python_B_m'].append(total())
    perf['Python_C'] = []
    perf['Python_C_m'] = []
    tidy()
    for _ in range(num):
        perf['Python_C'].append(
            monitor(gen_py_scip("Python_C", "pyc.scip"), "/tmp/11111.log", 0.01))
        perf['Python_C_m'].append(total())
    os.chdir(base_path)
    subprocess.run(['mv', 'Python_A/pya.scip', "."])
    subprocess.run(['mv', 'Python_B/pyb.scip', "."])
    subprocess.run(['mv', 'Python_C/pyc.scip', "."])

    perf['Go_A'] = []
    perf['Go_A_m'] = []
    tidy()
    for _ in range(num):
        perf['Go_A'].append(
            monitor(gen_go_scip('Go_A', 'Go_A', 'goa.scip'), "/tmp/11111.log", 0.01))
        perf['Go_A_m'].append(total())
    perf['Go_B'] = []
    perf['Go_B_m'] = []
    tidy()
    for _ in range(num):
        perf['Go_B'].append(
            monitor(gen_go_scip('Go_B', 'Go_B', 'gob.scip'), "/tmp/11111.log", 0.01))
        perf['Go_B_m'].append(total())
    perf['Go_C_m'] = []
    tidy()
    for _ in range(num):
        perf['Go_C'].append(
            monitor(gen_go_scip('Go_C', 'Go_C', 'goc.scip'), "/tmp/11111.log", 0.01))
        perf['Go_C_m'].append(total())
    os.chdir(base_path)
    perf['Java_A_m'] = []
    tidy()
    for _ in range(num):
        perf['Java_A'].append(
            monitor(gen_java_scip("Java_A"), "/tmp/11111.log", 0.01))
        perf['Java_A_m'].append(total())
    perf['Java_B_m'] = []
    tidy()
    for _ in range(num):
        perf['Java_B'].append(
            monitor(gen_java_scip("Java_B"), "/tmp/11111.log", 0.01))
        perf['Java_B_m'].append(total())
    perf['Java_C_m'] = []
    tidy()
    for _ in range(num):
        perf['Java_C'].append(
            monitor(gen_java_scip("Java_C"), "/tmp/11111.log", 0.01))
        perf['Java_C_m'].append(total())
    with open('output.csv', 'w', newline='') as file:
        writer = csv.writer(file)
        for i, value in perf.items():
            cpu = sum([j[0] for j in value])/len(value)
            mem = sum([j[1] for j in value])/len(value)
            writer.writerow([i, cpu, mem])


@cli.command()
def performance_merge_once():
    """This command will run the all process 20 times and output the report as perf.report"""
    perf = {}
    num = 1
    perf['Ts_A'] = []
    for _ in range(num):
        perf['Ts_A'].append(
            monitor(gen_ts_scip("Ts_A", "tsa.scip"), "/tmp/11111.log", 0.01))
    perf['Ts_B'] = []
    for _ in range(num):
        perf['Ts_B'].append(
            monitor(gen_ts_scip("Ts_B", "tsb.scip"), "/tmp/11111.log", 0.01))
    perf['Ts_C'] = []
    for _ in range(num):
        perf['Ts_C'].append(
            monitor(gen_ts_scip("Ts_C", "tsc.scip"), "/tmp/11111.log", 0.01))
    perf['Python_A'] = []
    for _ in range(num):
        perf['Python_A'].append(
            monitor(gen_py_scip("Python_A", "pya.scip"), "/tmp/11111.log", 0.01))
    perf['Python_B'] = []
    for _ in range(num):
        perf['Python_B'].append(
            monitor(gen_py_scip("Python_B", "pyb.scip"), "/tmp/11111.log", 0.01))
    perf['Python_C'] = []
    for _ in range(num):
        perf['Python_C'].append(
            monitor(gen_py_scip("Python_C", "pyc.scip"), "/tmp/11111.log", 0.01))
    os.chdir(base_path)
    subprocess.run(['mv', 'Python_A/pya.scip', "."])
    subprocess.run(['mv', 'Python_B/pyb.scip', "."])
    subprocess.run(['mv', 'Python_C/pyc.scip', "."])

    perf['Go_A'] = []
    for _ in range(num):
        perf['Go_A'].append(
            monitor(gen_go_scip('Go_A', 'Go_A', 'goa.scip'), "/tmp/11111.log", 0.01))
    perf['Go_B'] = []
    for _ in range(num):
        perf['Go_B'].append(
            monitor(gen_go_scip('Go_B', 'Go_B', 'gob.scip'), "/tmp/11111.log", 0.01))
    perf['Go_C'] = []
    for _ in range(num):
        perf['Go_C'].append(
            monitor(gen_go_scip('Go_C', 'Go_C', 'goc.scip'), "/tmp/11111.log", 0.01))
    os.chdir(base_path)
    perf['Java_A'] = []
    for _ in range(num):
        perf['Java_A'].append(
            monitor(gen_java_scip("Java_A"), "/tmp/11111.log", 0.01))
    perf['Java_B'] = []
    for _ in range(num):
        perf['Java_B'].append(
            monitor(gen_java_scip("Java_B"), "/tmp/11111.log", 0.01))
    perf['Java_C'] = []
    for _ in range(num):
        perf['Java_C'].append(
            monitor(gen_java_scip("Java_C"), "/tmp/11111.log", 0.01))
    perf['total'] = [total()]
    with open('output.csv', 'w', newline='') as file:
        writer = csv.writer(file)
        for i, value in perf.items():
            cpu = sum([j[0] for j in value])/len(value)
            mem = sum([j[1] for j in value])/len(value)
            writer.writerow([i, cpu, mem])


if __name__ == "__main__":
    cli()
