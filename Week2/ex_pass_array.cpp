/*
    Sample program for arrays:
    Function that returns the maximum item in an array
    Task: Add code in the max_array function definition 
          Compile and run the code
*/
#include <iostream>

using namespace std;


int max_array(int array[], int size);

int main()
{

	const int MAX_SIZE = 8;    // constant variable that holds the size of the
								// array
								
	int ages[MAX_SIZE] = {18, 19, 21, 17, 18, 22, 19, 25}; // declare an array of MAX_SIZE 
									  // integers called ages
	
	// COMPILE TIME: at g++ .... time  
	// RUN TIME:     While the program is running
	
	for (int i = 0; i < MAX_SIZE; i++)
	{
		//cout << "Enter ages[" << i<< "]=" << endl;
		cout << ages[i] << ' ';
	}
	cout << endl;
	
	int max_age = max_array(ages,MAX_SIZE);
	
	cout << "The max age is " << max_age << endl;

}

//########################
// This is a sample function header
// Function: max_array 
// Purpose: return the maximum value from an integer array
// Inputs: array and its size
// Output: integer max value
//##############################
// function definition
 int max_array(int array[], int size)
 {
	// declare and initialize an integer to hold the max value
	
	// FOR each element in the array 
	for (int i = 1; i < size; i++)
	{
		// compare the current max value with each 
		// element in the array
		
	 // update current max if needed
	}	
	// return the max value

 }
 
 /*
    Review Questions:
    1. How are arrays declared in C++?
       - Arrays in C++ are declared by specifying the data type followed by 
        the array name and size in square brackets, e.g., int myArray[10];
    2. How are arrays initialized in C++?
       - Arrays can be initialized at the time of declaration using curly braces, 
        e.g., int myArray[5] = {1, 2, 3, 4, 5}; 
        - or by assigning values to each element individually in a for loop.
    3. How are arrays passed to functions in C++?
       - Arrays are passed to functions in C++ by passing the array name, 
        which decays to a pointer to the first element of the array. 
        The function typically also takes an additional parameter for the size of the array.
    4. What is the difference between passing by value and passing by reference when dealing with arrays?
       - When passing arrays, passing by value means passing a copy of the pointer to the first element, 
       while passing by reference means passing the actual array itself, 
       allowing the function to modify the original array elements.
 */ 
 