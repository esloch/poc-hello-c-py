#include <Python.h>

// Define the function to be called from Python
static PyObject *hello(PyObject *self, PyObject *args) {
    printf("Hello, world!\n");
    Py_RETURN_NONE;
}

// Method table for the module
static PyMethodDef methods[] = {
    {"hello", hello, METH_NOARGS, "Print 'Hello, world!'"},
    {NULL, NULL, 0, NULL}  // Sentinel
};

// Module initialization function
static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "hello",        // Name of the module
    NULL,           // Module documentation
    -1,             // Size of the per-interpreter state of the module,
    methods         // Method table
};

// Module initialization function for Python 3
PyMODINIT_FUNC PyInit_hello(void) {
    return PyModule_Create(&moduledef);
}


// THE IDEA
// #include <stdio.h>

// int main() {
//     printf("Hello, world!\n");
//     return 0;
// }
 