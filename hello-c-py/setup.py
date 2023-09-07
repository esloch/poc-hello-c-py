from setuptools import setup, Extension

module = Extension('hello',
                   sources=['hello.c'])

setup(
    name='hello-c-python',
    version='1.0',
    description='Hello World in Python with C extension',
    author='Sandro Loch',
    author_email='es.loch@gmail.com',
    url='git@github.com:esloch/poc-hello-c.git',
    ext_modules=[module],
)
