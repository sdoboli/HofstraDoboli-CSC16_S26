#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>
using namespace std;

// to avoid inclusion of multiple definitions of the 
// DICE class use the compiler commands below
#ifndef DICE // if not defined DICE
#define DICE // define DICE

// declaration of class Dice
class Dice
{
  private: 
	
	int face; // can only take values between 1 and 6
	// static int countDice = 0; // keep track of how many Dice objects were created
  public: 
	
	// default constructor: initializes the face of a new
	// Dice object to 1
	Dice(); 
	
    // specific constructor: initializes the face of a new
	// Dice object to newFace 
	// Pre-condition: newFace is a valid number
	// call setFace function inside Dice(int newFace)
    Dice(int newFace); 
    
	// Sets face to the value in otherFace
	// Pre-condition: otherFace is valid 
	void setFace(int otherFace); 
	
	// Changes the value of face to a random value between 1 and 6
	void roll(); 
	
	// returns the face value of a Dice object
	int getFace() const;
	
	// displays the face value of a Dice object
	void display() const;

    bool Dice::isGreater(const Dice &other) const;
    // Copy constructor = copies the data of an existing object into a new object
	//Dice(const Dice &old); 
	
    

	// Assignment operator
	// Dice & operator=(const Dice &right); // returns a reference to a dice object

    // static function to get the count of Dice objects created
    // static int getCountDice();
};
#endif // end of ifndef DICE

// non-member functions

// overload == operator
bool operator==(const  Dice &right, const Dice &left);

// overload < operator
bool operator<(const Dice &right, const Dice &left);

// overload cout operator
//non-member function:  
ostream& operator<<(ostream &out, const Dice &obj);


/*
    Review Questions:
    1. What is a header file?
         - A header file in C++ is a file with a .h extension that contains declarations of functions, 
         classes, and variables. It is used to separate the interface of a class 
         or a set of functions from their implementation. 
         Header files allow for code modularity and reusability by providing a way to share 
         declarations across multiple source files.
    2. What is the compiler directive #ifndef used for in a header file?
         - The compiler directive #ifndef (which stands for "if not defined") is used in header files 
         to prevent multiple inclusions of the same header file. 
         - It checks if a specific macro (usually the name of the header file in uppercase) has 
         already been defined. 
         - If it has not been defined, the code between #ifndef and #endif is included, and the macro 
         is defined. 
         - If it has already been defined, the code is skipped, preventing multiple definitions of the 
         same classes or functions.
    3. What is a macro?
            - A macro in C++ is a fragment of code that is given a name. 
            - Whenever the name is used in the code, it is replaced by the contents of the macro.
    4. What is the purpose of a class declaration in a header file?
            - The purpose of a class declaration in a header file is to provide the interface for the class. 
            - It defines the structure of the class, including its data members and member functions, 
            without providing the implementation of the member functions. 
            - This allows other source files to include the header file and use the class without needing 
            to know the details of how the member functions are implemented.
*/