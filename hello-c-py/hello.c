// Includes the Python header file
// Required for writing Python extension modules in C.
#include <Python.h>

// Define the function to be called from Python
static PyObject *greet(PyObject *self, PyObject *args) {
    // Declares a C string variable to store the name passed as an argument.
    const char *name;

    // Parse the argument from Python
    if (!PyArg_ParseTuple(args, "s", &name)) {
        return NULL;
    }

    // Prints the personalized greeting to the standard output, using the name received from Python
    printf("Hello: %s!\n", name);
    Py_RETURN_NONE;
}

// Method table for the module
static PyMethodDef methods[] = {
    {"greet", greet, METH_VARARGS, "Print a personalized greeting"},
    {NULL, NULL, 0, NULL}  // Sentinel
};

// Module initialization function
static PyModuleDef moduledef = {
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
