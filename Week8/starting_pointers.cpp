#include <iostream>
using namespace std;

int main()
{
    int *ptr_int; // declare a pointer to an integer value. 
    // A pointer is a variable that stores a memory address
    // Right now ptr is uninitialized - its value is garbage (some random memory)
    // address
    ptr_int = nullptr; // initialize ptr to point to nothing (null pointer)
    // Pointer values are memory addresses of a data of the same type 
    // as the pointer type
    cout << "Size of ptr in bytes is: "    << sizeof(ptr_int) << endl; // expect 8 bytes on a 64-bit system
    
    char *ptr_char; // declare a pointer to a char value. ptr_char is uninitialized
    // ptr_char can be initialized with the address of a char variable but not 
    //with the address of an int variable
    ptr_char = nullptr; // initialize ptr_char to point to nothing (null pointer)
    cout << "Size of ptr_char in bytes is: " << sizeof(ptr_char) << endl; // expect 8 bytes on a 64-bit system
    
    // initialize the pointers with the address of some data
    // an int on the stack
    int i = 10;
    ptr_int = &i; // initialize ptr_int with the address of i

    *ptr_int = 20; // change the value of i to 20 using the pointer ptr_int

    cout << endl;
    cout << "Address of i is: " << &i << endl; // expect a memory address
    cout << "Value of i is: " << i << endl << endl; // expect 10
    cout << "Value of ptr_int is the address of i " << ptr_int << endl; // expect a memory address
    cout << "Value pointed by ptr_int is the value of i: " << *ptr_int << endl; // expect the value of i = 10
    cout << "Address of ptr_int is: " << &ptr_int << endl; // expect a memory address

    // initialize ptr_char with the address of a char variable on the stack
    char c = 'A';
    ptr_char = &c; // initialize ptr_char with the address of c on the stack

    cout << "\nAddress of c is: " << (void *)&c << endl; // expect a memory address
    cout << "Value of c is: " << c << endl; // expect 'A'
    cout << "Value of ptr_char is the address of c " << ptr_char << endl; // expect a memory address
    cout << "Value pointed by ptr_char is the value of c: " << *ptr_char << endl; // expect the value of c = 'A'
    cout << "Address of ptr_char is: " << &ptr_char << endl; // expect a memory address
    
    // allocate dynamic memory for an int value and initialize it to 30
    int *ptr_heap = new int; // ptr_heap stores the address of the new integer on the heap
    *ptr_heap = 30; 
    
    cout << "\nAddress of the new integer on the heap is: " << ptr_heap << endl; 
    // expect a memory address different than the ones before (memmory address on the heap != memory address
    //on the stack)
    cout << "Value of the new integer on the heap is: " << *ptr_heap << endl; // expect 30
    delete ptr_heap; // delete = dallocates or frees memory on the heap that was allocated with new

    ptr_heap = new int[5]; // allocate dynamic memory for an array of 5 integers on the heap
    // initialize all 5 integers on the heap with 0
    for (int i = 0; i < 5; i++){
        ptr_heap[i] = 0;
    }
    cout << "\nAddress of the new array on the heap is: " << ptr_heap << endl;
    cout << "Values of the new array on the heap are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << "Address: \t" << (ptr_heap + i) << "\t";
        cout << "Value: \t" << *(ptr_heap+i) << endl; // expect 0
    }
    cout << endl;
    delete []ptr_heap; // delete[] = deallocates or frees memory of an array on the heap that was allocated with new[]

    
}

/*
// What is a memory leak? Examples of memory leaks?
    memory allocated on the heap with no pointer pointing to it. Lost the pointer to the memory on the heap

// What is a dangling pointer? Examples of dangling pointers?
  - uninitialized pointer is a dangling pointer because it points to some random memory address.
  -  pointer that points to memory on the heap that was deallocated with delete or delete[] is also a 
  dangling pointer because it points to a memory address on the heap that is no longer allocated 
  to the program.

*/