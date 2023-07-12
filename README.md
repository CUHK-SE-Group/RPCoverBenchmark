# RPCoverBenchmark

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
