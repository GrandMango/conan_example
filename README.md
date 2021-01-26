# How to build
**Step1**

checkout dependency_pass_1 branch code, run `conan create . test/test`

**Step2**

checkout dependency_pass_2 branch code, run `conan create . test/test`

**Step3**

checkout dependency_pass_final branch code, run following commands:
```
$ mkdir build && cd build
$ conan install ..
$ cmake ..
$ make
```
