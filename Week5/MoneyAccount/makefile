# from: https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
# Simple Makefile

CC = g++

# Compile everything in one step
test_account: test_account.cpp money_functions.cpp account_functions.cpp
	$(CC) test_account.cpp money_functions.cpp account_functions.cpp -o test_account

# Clean rule
clean:
	rm -f test_account *.o