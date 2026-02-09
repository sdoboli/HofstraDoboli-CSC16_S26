#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5; // constant for array size

    int v1 = 10; // declare an integer variable
    int my_array[SIZE]; // declare an array of integers
    int v2 = -10; // declare another integer variable

    cout << "Memory address of v1 " << &v1 << endl;
    cout << "Memory address of my_array = " << &my_array << endl;
    cout << "Memory address of first item in array (my_array[0]) = " << &my_array[0] << endl;
    cout << "Memory address of v2 " << &v2 << endl;

    cout << "\nArray item addresses: " << endl;
    for (int i = 0; i < SIZE; i++){
        cout << "my_array[" << i << "] Address = " << &my_array[i] << endl;
        my_array[i] = 0; // initialize array items to 0
        cout << "my_array[" << i << "] Value = "  << my_array[i] << endl;
    }
    cout << endl;

    /*
    Review Questions:
    1. What do you notice about the memory addresses of the array items?
       - They are contiguous memory locations, each subsequent item is located at the next memory address 
        given by the size of the array data type.
    2. What happens when you access array items outside the declared bounds (e.g., my_array[-4] or my_array[10])?
       - Accessing out-of-bounds array items leads to undefined behavior. It may read or write to memory locations that are not part of the array, potentially causing crashes or data corruption.
    3. Why is it important to stay within the bounds of an array?
       - Staying within the bounds of an array is crucial to ensure data integrity and program stability. Accessing out-of-bounds memory can lead to unpredictable behavior, security vulnerabilities, and difficult-to-debug errors.
    4. How can you prevent accessing out-of-bounds array elements in your code?
       - You can prevent out-of-bounds access by always checking the index against the array size before accessing an element, using loops that respect the array bounds, and employing safer data structures like std::vector in C++ that handle bounds checking.
    */

}