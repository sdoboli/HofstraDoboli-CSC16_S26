#include "dice.h"

// compile this using:
// g++ -o testDice testDice.cpp Dice.cpp
int sumDice(Dice arrayD[], int size);

int main()
{
 	srand(time(NULL)); // initializes the seed of the random number generator
 	
 	// declare a new Dice object called d1
 	//  ClassName ObjectName;
 	// Default constructor is called because d1 has
 	// no specific instructions (parameters) on how 
 	// its data members should be initialized
 
 	
 	// Test specific constructor
 	// declare a new dice object called d2 with a face set 
 	// to 4
	// Specific constructor is called
 

 	
 	// Test setFace();
 	// set the face of d1 object to 5
 	// d1 has to call the function setFace 
 	// d1 = calling object
 
 	
 	// Test display function
 	
 	
 	// Test roll() function
 	// roll each dice
 
 	
 	// Test getFace() function
 	// display the sum of the two dice objects

	
    // roll both dices 100 times. Count the number of
    // times the sum is equal to 12. 
	
    
    
    //Declare an array of 5 dice objects. 
	// Write a function (sumDice) 
	// that rolls all dice objects 
	// and computes and returns the sum of all 
	// 5 dice objects in the array. 
	// Write a while loop in main that calls 
	// the function sumDice until the number 
	//returned is even and greater than 10. 
	// Print the number.
   
   
    // Declare an array of 5 dice objects
    
    cout << "=======================\n";
    
    Dice array[5]; // the default constructor is called
 	               // 5 times, once for each dice object 
              	  // in the array
    // roll all dice objects in the array 
    // compute the sum - call the function sumDice
    // print the sum
    cout << "=======================\n";
    
    
    
} // end of main()

// compute the sum of the faces of the dice objects in the array
int sumDice(Dice arrayD[], int size)
{
 	int sum = 0;
    // add code
    return sum;
}