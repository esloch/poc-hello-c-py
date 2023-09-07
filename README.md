# hello-c-py

This is a simple Python extension module that provides a `greet` function for personalized greetings. 
You can use this module to print customized greetings in Python.

## Purpose

The purpose of this project is to demonstrate how to create a simple Python extension module using C and build it for Python integration. In this project, we have a C extension module named `hello` that provides a `greet` function for personalized greetings in Python. Additionally, we'll provide instructions on how to execute the script `main.py` from the command line, passing a name as a command-line argument.

The provided C code in "hello.c" is an extension module for Python. This code allows you to define a new Python module named hello, which contains a function called greet. The greet function can be called from Python, accepts one argument (a name), and prints a personalized greeting.

### Prerequisites

Before using this module, ensure you have the following installed on your system:

- Python 3.x
- python3-dev
- GCC (GNU Compiler Collection)

### Installation

1. Clone the repository to your local machine:

   ```shell
   git clone git@github.com:esloch/poc-hello-c-py.git
   ```

#### Navigate to the project directory
```shell
   cd hello-c-py
```

#### Build the C extension module
```shell
   python3 setup.py build
```

#### Install the module (use sudo if necessary):
```shell
   python3 setup.py install
```

### Usage

```shell
   python3 main.py <name>
```
*Replace <name> with the name you want to greet.*
