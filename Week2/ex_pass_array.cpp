/*
    Sample program for arrays:
    Function that returns the maximum item in an array
    Task: Add code in the max_array function definition 
          Compile and run the code
*/
#include <iostream>
using namespace std;

int max_array(int array[], int size); // pass the size of the array as a 
                                      // parameter to avoid out-of-bounds access
void bubble_sort(int array[], int size); 

int main()
{
	const int MAX_SIZE = 8;    // constant variable that holds the size of the
								// array
								
	int ages[MAX_SIZE] = {18, 19, 21, 17, 18, 22, 19, 25}; // declare an array of MAX_SIZE 
									                       // integers called ages
    // bubble-sort
	// 1st pass {18, 19, 17, 18, 21, 19, 22, 25} - not sorted yet
    // 2nd pass {18, 17, 18, 19, 19, 21, 22, 25} - not sorted yet
    // 3rd pass {17, 18, 18, 19, 19, 21, 22, 25} - sorted (one swap in this pass) don't stop yet
    // 4th pass {17, 18, 18, 19, 19, 21, 22, 25} - sorted (no swaps in this pass)
    // After 4 passes, the array is sorted. The algorithm can stop after a pass with no swaps, which indicates that the array is fully sorted.
    // max number of swaps.      = 8 (worst case, when the array is in reverse order)
    // minimum number of passes = 1 (best case, when the array is already sorted)
	// COMPILE TIME: at g++ .... time  
	// RUN TIME:     While the program is running
	
	for (int i = 0; i < MAX_SIZE; i++){
		cout << "&ages[" << i << "] = " << &ages[i] << ' ' << "ages[" << i << "] = " << ages[i] << endl;
	}
	cout << endl;
	
	int max_age = max_array(ages,MAX_SIZE);
	
	cout << "The max age is " << max_age << endl;

    bubble_sort(ages, MAX_SIZE);
    for (int i = 0; i < MAX_SIZE; i++){
		cout << "&ages[" << i << "] = " << &ages[i] << ' ' << "ages[" << i << "] = " << ages[i] << endl;
	}

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
	int max_value = array[0]; // initialize max_value to the first item in the array
	// FOR each element in the array 
	for (int i = 1; i < size; i++){
        cout << "&array[" << i << "] = " << &array[i] << ' ' << "array[" << i << "] = " << array[i] << endl;
		// compare the current max value with each 
        if (max_value < array[i])
			max_value = array[i];
	}	
	// return the max value
    return max_value;
 }
 

 void bubble_sort(int array[], int size){
    int num_swaps = 1; // count the number of swaps in each pass
    int num_passes = 0; // count the number of passes
    while (num_swaps > 0 && num_passes < size){ // for each pass

        num_swaps = 0; // count the number of swaps in each pass
        for (int i = 0; i < size-1 - num_passes; i++){ // for each item in a pass

            if (array[i] > array[i+1]){
                // swap array[i] and array[i+1]
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                num_swaps++;
            }
        } // end of the for loop
        num_passes++; // increment the number of passes
    } // end of the while loop
    
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
        which decays to a pointer (reference = address) to the first element of the array. 
        The function typically also takes an additional parameter for the size of the array.
 */ 
 