#include <iostream>
using namespace std;

int *f(int size, int initial_val);

int main()
{
 	int    i =10; 
  double j = 20;
  cout << "i = "    << i << " The stack address of i is " << &i << endl;
 	cout << "The size of i in bytes is " << sizeof(i) << endl;
 	cout << "The size of address of i in bytes is " << sizeof(&i) << endl;

 	
  cout << "j = "    << j << " The stack address of j is " << &j << endl;
 	cout << "The size of j in bytes is " << sizeof(j) << endl;
 	cout << "The size of address of j in bytes is " << sizeof(&i) << endl;
 	cout << "2. -----------------------------------------------" << endl;
 	
 	int *ptrInt1 = 0; // declare a pointer to an int
                      // initialize ptrInt1 to point to i
 	ptrInt1 = &i;
 	
  char *ptrByte = (char *)ptrInt1;
   
 	cout << "The value of the pointer is "   << ptrInt1 << endl; // expect a memory address
  cout << "The value pointed by the pointer is "  << *ptrInt1 << endl; // expect an integer value
 	cout << "The stack memory address where the pointer is stored " << &ptrInt1 << endl; // expect a memory address
 	cout << "The size of the pointer in memory (bytes) is " << sizeof(ptrInt1) << endl;
 	
    // the memory addresses where i's all 4 bytes are stored
   cout << hex << "\ni in hexa " << i << " i in dec " << dec << i << endl;
   cout << dec << "memory content of the address of i (*ptrInt1)= " << *ptrInt1 << endl;

  double *ptrDouble = &j;
  cout << "The value of the pointer is " << ptrDouble << endl; // expect a memory address
  cout << "The value pointed by the pointer is " << *ptrDouble << endl; // expect an integer value
 	cout << "The memory address of the pointer is " << &ptrDouble << endl; // expect a memory address
 	cout << "The size of the pointer in memory (bytes) is " << sizeof(ptrDouble) << endl;

 	cout << "3. -----------------------------------------------" << endl;

 	int *ptrInt2 = 0; // storage for ptrInt2 is allocated on the stack 
    ptrInt2  = new int; // 4B for the int value are allocated in dynamic memory
    *ptrInt2 = 30;      // initialize the dynamic memory location to 30
    
    cout << "The value of the pointer is " << ptrInt2 << endl; // expect a memory address different than the ones before
 	   	 		 	   	  	  		  	   	  		  	 	   // because it is a memory address in dynamic memory not on the stack
  	cout << "The value pointed by the pointer is " << *ptrInt2 << endl; // expect an integer value
 	  cout << "The memory address of the pointer is " << &ptrInt2 << endl; // expect a memory address
 	  cout << "The size of the pointer in memory (bytes) is " << sizeof(ptrInt2) << endl;

    cout << "ptrInt1 = " << ptrInt1 << " ptrInt2 = " << ptrInt2 << " ptrDouble = " << ptrDouble << endl;
    // ptrInt1 points to i, ptrInt2 points to an int on the heap
    cout << "ptrInt1- ptrInt2 = " << ptrInt1 - ptrInt2 << endl;
  
    // cout << "ptrInt1- ptrDouble = " <<  ptrInt1 - ptrDouble << endl;
    
    cout << "ptrInt1 - 2 = " << ptrInt1 - 2 << endl; 

    cout << "4. -----------------------------------------------" << endl;
 
     int size = 0;
     cout << "Dynamic array example" << endl;
     cout << "Enter a size for the array " << endl;
     cin  >> size;
     
     //int array[10]; // array on the stack
     int *ptrArray = new int[size]; //dynamic - array allocate in dynamic memory an array of integers of length size
     
     // ptrArray is a pointer to an array of size integers
     
     // initialize all array elements to 1
     for (int i= 0; i < size; i++)
     {
 	      ptrArray[i] = 1; // ptrArray[i] = *(ptrArray+i)
 	      cout << ptrArray[i] << ' ';
     }
     cout << endl;
     
    delete ptrInt2;     // deallocate memory for the one int on the heap, you are not deleting the pointer
    delete [] ptrArray; // deallocate memory for the dynamic array
    //ptrArray = 0;
   // do not do this cout << ptrArray[5] << endl; // not access a dynamic memory location after you deallocated it  
     cout << "The value of the pointer is " << ptrInt2 << endl; // expect a memory address different than the ones before
 	   	 		 	   	  	  		  	   	  		  	 	   // because it is a memory address in dynamic memory not on the stack
  	//cout << "The value pointed by the pointer is " << *ptrInt2 << endl; // expect an integer value
 	cout << "The memory address of the pointer is " << &ptrInt2 << endl; // expect a memory address
 	cout << "The size of the pointer in memory (bytes) is " << sizeof(ptrInt2) << endl;

   ptrArray = f(size, 5);
   for (int i= 0; i < size; i++)
     {
 	      cout << ptrArray[i] << ' ';
     }
}

// allocate a dynamic array of size and initialize it to initial_val
int *f(int size, int initial_val)
{  
   int *ptrArray = new int[size]; // dynamic memory allocated for an array
   for (int i = 0; i < size; i++)
      ptrArray[i] = initial_val;
   
   return ptrArray;
}

/* Review */




