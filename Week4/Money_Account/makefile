# Simple Makefile

CC = g++

# Compile everything in one step
test_classes: test_classes.cpp money_functions.cpp account_functions.cpp
	$(CC) test_classes.cpp money_functions.cpp account_functions.cpp -o test_classes

# Clean rule
clean:
	rm -f test_classes *.o
