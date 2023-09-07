# Define the directory containing the tests
TESTS_DIR = tests

# Define the test source file
TEST_SOURCE = $(TESTS_DIR)/test_hello.c

# Define the test executable
TEST_EXECUTABLE = $(TESTS_DIR)/test_hello

# Define the target to compile and run the tests
test: $(TEST_EXECUTABLE)
	@echo "Running tests..."
	$(TEST_EXECUTABLE)

# Define the target to compile the tests
$(TEST_EXECUTABLE): $(TEST_SOURCE)
	@echo "Compiling tests..."
	gcc -o $(TEST_EXECUTABLE) $(TEST_SOURCE)

# Clean up compiled files
clean:
	@echo "Cleaning up..."
	rm -f $(TEST_EXECUTABLE)

.PHONY: test clean
