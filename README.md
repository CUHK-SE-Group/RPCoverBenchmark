# RPCoverBenchmark

## Project Layout

```
├── Cpp_A                   // cpp service a
├── Cpp_B                   // cpp service b
├── Cpp_C                   // cpp service c
├── Go_A                    // go service a
├── Go_B                    // go service b
├── Go_C                    // go service c
├── Java_A                  // java service a
├── Java_B                  // java service b
├── Java_C                  // java service c
├── Python_A                // python service a
├── Python_B                // python service b
├── Python_C                // python service c
├── Ts_A                    // typescript service a
├── Ts_B                    // typescript service b
├── Ts_C                    // typescript service c
├── protos                  // the protos we used
├── third_party             // third party binaries
├── README.md
├── requirements.txt        // python dependencies
├── scip.proto              // proto related with scip, copied from https://github.com/sourcegraph/scip/blob/main/scip.proto
├── bench.py                // the python scripts that to reproduce experiment results.
├── generate.sh             // the script that generate the gRPC code
├── docker-compose.yaml     
├── Dockerfile
├── Makefile
├── package.json
└── package-lock.json
```

## Call Dependencies

The following table shows the service/function level dependencies(calls).

A function is named [Language]-[Svc Name]-[Function#]. 

Take the first function as an example, it is named as `python-A-1`. If a function calls another function, whether it is a direct function call or a remote procedure call, it will be considered as a dependent service. Taking the first line in the table as an example, it indicates that `python-A-1` will call `python-A-2`, `python-B-1`, and `python-C-1`.

| Language     | Svc Name | Function# | Dependent Services Function ID                            |
|--------------|----------|-----------|-----------------------------------------------------------|
| Python       | A        | 1         | python-A-2, python-B-1, python-C-1                         |
|              |          | 2         | python-B-2, python-C-2, java-A-1                           |
|              |          | 3         | python-B-1, python-B-3, java-A-2                           |
| Python       | B        | 1         | python-C-1, python-C-2, python-C-3                         |
|              |          | 2         | python-C-3, python-C-2, java-A-3                           |
|              |          | 3         | python-B-1, python-C-1, python-B-2                         |
| Python       | C        | 1         | python-C-2, python-C-3, java-B-1                           |
|              |          | 2         | python-C-3, java-B-2, java-B-1                             |
|              |          | 3         | python-C-1, java-B-3, java-B-2                             |
| Java         | A        | 1         | java-A-2, java-A-3, java-C-1                               |
|              |          | 2         | java-B-1, java-B-2, java-A-3                               |
|              |          | 3         | java-B-2, java-B-3, ts-A-1, cpp-A-1, go-A-1                 |
| Java         | B        | 1         | java-B-3, ts-A-1, cpp-A-1, go-A-1                          |
|              |          | 2         | java-B-3, ts-A-2, cpp-A-2, go-A-2, java-C-1, java-C-2       |
|              |          | 3         | java-C-1, java-C-3, java-C-2, go-A-3, go-A-2, cpp-A-2       |
| Java         | C        | 1         | cpp-A-3, cpp-B-3, java-C-2, java-C-3, go-A-3, go-B-2, ts-A-3, ts-B-2 |
|              |          | 2         | cpp-A-2, cpp-B-2, java-C-3, ts-C-3, go-A-2, go-B-3, ts-B-3, ts-C-2 |
|              |          | 3         | cpp-A-1, cpp-B-1, go-B-1, go-C-2, ts-B-1, ts-A-2             |
| Go           | A        | 1         | go-A-2, go-A-3, go-B-1, cpp-B-3, cpp-C-2, ts-B-1, ts-B-3, ts-C-2 |
|              |          | 2         | go-C-1, go-C-2, go-B-3, java-A-1, ts-C-1                     |
|              |          | 3         | go-B-2, go-A-2, go-C-3, java-B-2, cpp-C-3, cpp-C-2           |
| Go           | B        | 1         | go-C-3, go-B-2, go-C-2, go-C-1, ts-B-1, ts-C-2               |
|              |          | 2         | go-C-1, go-B-3, go-C-3, java-C-3, cpp-A-3                     |
|              |          | 3         | go-C-3, ts-A-2, ts-B-1, ts-A-3, cpp-B-2                       |
| Go           | C        | 1         | go-C-2, go-C-3, python-C-2, java-B-2                         |
|              |          | 2         | cpp-B-2, ts-C-3                                               |
|              |          | 3         |                                                               |
| C++          | A        | 1         | cpp-B-2, cpp-A-2, python-B-2, java-B-2                       |
|              |          | 2         | ts-B-1, ts-B-2, cpp-B-3                                       |
|              |          | 3         | ts-A-2, cpp-B-2, cpp-B-1                                       |
| C++          | B        | 1         | cpp-B-3, cpp-C-1, cpp-C-2                                     |
|              |          | 2         | cpp-C-1, cpp-B-3, java-B-2                                     |
|              |          | 3         | cpp-C-3, cpp-C-2                                               |
| C++          | C        | 1         | cpp-B-3, cpp-C-3, cpp-B-1                                     |
|              |          | 2         | cpp-C-3, ts-A-2                                               |
|              |          | 3         | java-B-3, ts-C-3                                               |
| Typescript   | A        | 1         | ts-A-2, ts-B-3, ts-C-2, cpp-A-2                               |
|              |          | 2         | ts-A-3, cpp-B-2, java-C-2                                      |
|              |          | 3         | ts-A-1, ts-B-3, ts-C-3                                         |
| Typescript   | B        | 1         | python-A-2, java-B-2                                           |
|              |          | 2         | cpp-A-2, cpp-B-3                                               |
|              |          | 3         | cpp-B-3, java-A-2                                               |
| Typescript   | C        | 1         | go-B-2, go-B-3                                                 |
|              |          | 2         | ts-C-2, java-C-2                                               |
|              |          | 3         | python-B-2                                                     |


## How to start

There are some dependencies should be installed:

1. scip-clang
2. scip-go
3. scip-java
4. scip-typescript
5. scip-python

We provide a Dockerfile to help reproduce the experiment results. Also, these binaries and corresponding source codes are stored in `third_party` directory.

Run the following commands, then, a shell will be opened.

```bash
docker build -t rpcover:latest .
docker run -it rpcover:latest bash
```

We have generated the corresponding dependencies, so we just need to operate the `bench.py` to reproduce results.

Before executing commands, the first thing you should do is activating the python venv, because our test scripts is based on the python environment.

```bash
source venv/bin/activate
```

After activating the environment, the shell should look like below, a `(venv)` symbol will appear.

```
root@93f13740a588:/opt/RPCoverBenchmark# source venv/bin/activate
(venv) root@93f13740a588:/opt/RPCoverBenchmark#
```

There are several commands that can be used:

```bash
(venv) root@93f13740a588:/opt/RPCoverBenchmark# python bench.py
Usage: bench.py [OPTIONS] COMMAND [ARGS]...

Options:
  --help  Show this message and exit.

Commands:
  clean                    This command remove the benchmark testing files
  convert                  This command will convert the total.scip file...
  gen-merged-scip          This command merge and add relationshiops...
  gen-simple-scip          This command generate the base scip index file...
  lsif2cypher
  performance-merge-every  This command will run every scip index, and...
  performance-merge-once   This command will run the all process 20 times...
  time                     This command is a general wrapper of executing...
```

Next, we will introduce usage of each command.


### generating the orignal scip files

This step will produce scip index of each service in the project root path.

```bash
$ python bench.py gen-simple-scip
Begin to generate...
Generating Typescript SCIP index...
Attaching to process 1980483
+ Ts_A (556ms)
done /opt/RPCoverBenchmark/tsa.scip
Process finished (1.37 seconds)
Time: 1.369s, Memory: 252.426MB
Attaching to process 1980507
+ Ts_B (547ms)
done /opt/RPCoverBenchmark/tsb.scip
Process finished (1.36 seconds)
Time: 1.358s, Memory: 251.984MB
```

After waiting some minutes, there will be several scip files in the project root path.

```bash
(venv) root@93f13740a588:/opt/RPCoverBenchmark# ls -alh *.scip
-rw-r--r-- 1 root root 4.3M Jul 17 06:45 cppa.scip
-rw-r--r-- 1 root root 4.3M Jul 17 06:45 cppb.scip
-rw-r--r-- 1 root root 4.3M Jul 17 06:45 cppc.scip
-rw-r--r-- 1 root root 506K Jul 17 06:44 goa.scip
-rw-r--r-- 1 root root 504K Jul 17 06:44 gob.scip
-rw-r--r-- 1 root root 486K Jul 17 06:44 goc.scip
-rw-r--r-- 1 root root 1.7M Jul 17 06:42 javaa.scip
-rw-r--r-- 1 root root 1.7M Jul 17 06:43 javab.scip
-rw-r--r-- 1 root root 1.7M Jul 17 06:44 javac.scip
-rw-r--r-- 1 root root 557K Jul 17 06:44 pya.scip
-rw-r--r-- 1 root root 550K Jul 17 06:44 pyb.scip
-rw-r--r-- 1 root root 550K Jul 17 06:44 pyc.scip
-rw-r--r-- 1 root root 769K Jul 17 06:40 tsa.scip
-rw-r--r-- 1 root root 767K Jul 17 06:40 tsb.scip
-rw-r--r-- 1 root root 763K Jul 17 06:40 tsc.scip
```


### merge all the scip files and the proto files into one scip index

In this step, you can get the merged `total.scip` file together with the relationship between protobuf and generated code. The `total.scip` is merged from all the scip file generated in previous step.


```bash
(venv) root@93f13740a588:/opt/RPCoverBenchmark# python bench.py gen-merged-scip
Generating merged SCIP index...
Attaching to process 30580
[libprotobuf ERROR google/protobuf/wire_format_lite.cc:618] String field 'google.protobuf.compiler.CodeGeneratorResponse.File.content' contains invalid UTF-8 data when parsing a protocol buffer. Use the 'bytes' type if you intend to send raw bytes.
Process finished (0.12 seconds)
Time: 0.119s, Memory: 17.918MB
Done!
```

In this benchmark, the generated file size is around 2.9MB

```bash
(venv) root@93f13740a588:/opt/RPCoverBenchmark# ls -alh total.scip
-rw-r--r-- 1 root root 2.9M Jul 17 08:02 total.scip
```

Or in anther way, you can maually input this command in the repository root path to get the corresponding merge file.

```bash
/usr/bin/time -v protoc --scip_out=./ --plugin=/opt/third_party/binaries/protoc-gen-scip --scip_opt=scip_dir=./,sourceroot=$(pwd),out_file=total.scip -I . $(find . -name "*.proto")
```

## transform the scip file into lsif

To transform scip file into lsif file, you can type `python bench.py convert total.scip`, where `total.scip` is the file that we generated in the previous step.

```bash
(venv) root@93f13740a588:/opt/RPCoverBenchmark# python bench.py convert total.scip
Attaching to process 30604
Process finished (0.19 seconds)
Time: 0.194s, Memory: 176.023MB
```

Then, the default file `dump.lsif` will be output in the project root path. It is stored in json format. We can take a look into it, each line in this file is a vertex or an edge described in json format.

```bash
(venv) root@93f13740a588:/opt/RPCoverBenchmark# head dump.lsif
{"id":1,"version":"0.4.3","projectRoot":"file:///opt/RPCoverBenchmark","positionEncoding":"utf-8","toolInfo":{"name":"scip-clang","version":"0.2.2"},"type":"vertex","label":"metaData"}
{"id":2,"type":"vertex","label":"definitionResult"}
{"id":3,"type":"vertex","label":"resultSet"}
{"id":4,"type":"vertex","label":"referenceResult"}
{"id":5,"type":"vertex","label":"hoverResult","result":{"contents":{"kind":"markdown"}}}
{"id":6,"type":"edge","label":"textDocument/definition","inV":2,"outV":3}
{"id":7,"type":"edge","label":"textDocument/references","inV":4,"outV":3}
{"id":8,"type":"edge","label":"textDocument/hover","inV":5,"outV":3}
{"id":9,"type":"vertex","label":"moniker","identifier":"scip-proto proto protos proto3 proto/Java_C/Java_C#","kind":"export","scheme":"scip-proto"}
{"id":10,"type":"edge","label":"moniker","inV":9,"outV":3}
```