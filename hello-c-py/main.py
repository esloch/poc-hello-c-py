import hello
import sys

if len(sys.argv) != 2:
    print("Usage: python3 main.py <name>")
    sys.exit(1)

name = sys.argv[1]
hello.greet(name)


# ---
# import hello

# hello.hello()
