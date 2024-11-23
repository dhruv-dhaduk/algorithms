# Data Structures and Algorithms

### This repository contains Data Structures and Algorithms which I have learned and implemented

- All Data Structures and Algorithms are implemented in C.
- All data structures and algorithms can be located in the `src` directory and `include` directory contains the header files for them.
- Google Test is used for Unit Testing.
- Source code of google test is added in the repository, so no need to download it separately.
- `main.cpp` at the root of the repo contains the unit tests and main function to execute them.
- `You can only run this on UNIX based systems`, however, you can copy individual files to other systems and run them seperately.

> [!TIP]
> If you are using Windows, you can use [WSL](https://learn.microsoft.com/en-us/windows/wsl/install) to run the code.

### How to Compile and Run
#### Requirements :
- UNIX based system
- make
- gcc
- g++

#### To compile the code, enter :

```bash
make
```
It will compile all the files in the `src` directory and create a `build` directory which contains the compiled files.

#### To run the code, enter :

```bash
./build/app
```

#### To compile and run using one command, enter :

```bash
make run
```