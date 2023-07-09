import re
import subprocess
import psutil
import os
import time

plugin_path = "/home/nn/protoc-gen-scip/protoc-gen-scip"


def monitor(cmd: list, log_file: str, interval: float):
    psrecord_cmd = ["psrecord", str(subprocess.Popen(
        cmd).pid), "--log", log_file, "--interval", str(interval)]
    subprocess.run(psrecord_cmd)
    cpu, mem = parse_psrecord_log(log_file)
    print(f"cpu: {cpu}, mem: {mem}")
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

    return max(cpu_times), max(memory_usage)


def gen_merged_scip(scip_out: str, plugin: str, scip_file: str, proto_base: str, proto_file: str):
    return ["protoc", f"--scip_out={scip_out}", f"--plugin={plugin}",
            f"--scip_opt=scip_file={scip_file}", "-I", proto_base, proto_file]


# --output="index.scip"      The output file.
# --project-root="."         Specifies the directory to index.
# --module-root="."          Specifies pythe directory containing the go.mod file.
def gen_go_scip(module_root: str, project_root: str, output_file: str):
    return ["scip-go", f"--module-root={module_root}", f"--project-root={project_root}", f"--output={output_file}"]


def single_round_testing(base_scip: str, proto_base: str, proto_file: str, original_scip_log: str, merge_scip_log: str, project_root: str, times: int):
    ori_cpu_sum = 0
    ori_mem_sum = 0
    mer_cpu_sum = 0
    mer_mem_sum = 0
    for _ in range(times):
        cmd1 = gen_go_scip(project_root, project_root, base_scip)
        cmd2 = gen_merged_scip(scip_out="./", plugin=plugin_path,
                               scip_file=base_scip, proto_base=proto_base, proto_file=proto_file)
        ori = monitor(cmd1, original_scip_log, 0.01)
        mer = monitor(cmd2, merge_scip_log, 0.01)
        ori_cpu_sum += ori[0]
        ori_mem_sum += ori[1]
        mer_cpu_sum += mer[0]
        mer_mem_sum += mer[1]
    return ori_cpu_sum/times, ori_mem_sum/times, mer_cpu_sum/times, mer_mem_sum/times


def Go_A(times: int):
    base_scip = "goa.scip"
    proto_base = "."
    proto_file = "protos/Go_A.proto"
    original_scip_log = "goa_scip.log"
    merge_scip_log = "goa_merge.log"
    project_root = "Go_A"
    return single_round_testing(base_scip, proto_base, proto_file, original_scip_log, merge_scip_log, project_root, times)


def Go_B(times: int):
    base_scip = "gob.scip"
    proto_base = "."
    proto_file = "protos/Go_B.proto"
    original_scip_log = "gob_scip.log"
    merge_scip_log = "gob_merge.log"
    project_root = "Go_B"
    return single_round_testing(base_scip, proto_base, proto_file, original_scip_log, merge_scip_log, project_root, times)


def Go_C(times: int):
    base_scip = "goc.scip"
    proto_base = "."
    proto_file = "protos/Go_C.proto"
    original_scip_log = "goc_scip.log"
    merge_scip_log = "goc_merge.log"
    project_root = "Go_C"
    return single_round_testing(base_scip, proto_base, proto_file, original_scip_log, merge_scip_log, project_root, times)


if __name__ == "__main__":
    l = []
    l.append(Go_A(20))
    l.append(Go_B(20))
    l.append(Go_C(20))
    for line in l:
        print(line[0], line[2], line[2]/line[0]*100)
