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


There are several commands that can be used:

```bash
$ python bench.py --help     
Usage: bench.py [OPTIONS] COMMAND [ARGS]...

Options:
  --help  Show this message and exit.

Commands:
  clean                    This command remove the benchmark testing files
  convert                  This command will convert the total.scip file...
  gen-merged-scip          This command merge and add relationshiops...
  gen-simple-scip          This command generate the base scip index file...
  performance-merge-every  This command will run every scip index, and...
  performance-merge-once   This command will run the all process 20 times...
  time                     This command is a general wrapper of executing...
```


### generating the orignal scip files

The

```bash
$ python bench.py gen-simple-scip
Begin to generate...
Generating Typescript SCIP index...
Attaching to process 1980483
+ Ts_A (556ms)
done /home/nn/RPCoverBenchmark/tsa.scip
Process finished (1.37 seconds)
Time: 1.369s, Memory: 252.426MB
Attaching to process 1980507
+ Ts_B (547ms)
done /home/nn/RPCoverBenchmark/tsb.scip
Process finished (1.36 seconds)
Time: 1.358s, Memory: 251.984MB
```

