#include "dice.h" // include the header file
#include <cassert> // for assert function
#include <iostream>

// compile the Dice.cpp after you add each function
// g++ -c Dice.cpp
	
// default constructor: initializes the face of a new
// Dice object to 1
Dice::Dice()
{
  cout <<  "Default constructor " << endl;
  face = 1;	// not redeclaring the data member face	
  // countDice++;
}


// specific constructor: initializes the face of a new
// Dice object to newFace 
// Pre-condition: newFace is a valid number
// call setFace function inside Dice(int newFace)
Dice::Dice(int newFace)
{
    cout << "Specific constructor " << endl; 
   	setFace(newFace);    
}

// Sets face to the value in otherFace
// Pre-condition: otherFace is valid 
void Dice::setFace(int otherFace)
{
 	assert(otherFace >= 1 && otherFace <= 6);
	face = otherFace;  
}


// Changes the value of face to a random value between 1 and 6
void Dice::roll()
{
 	 face = rand()%6 +1; 
}
	
// returns the face value of a Dice object
int Dice::getFace() const
{
 	return face;
}

// displays the face value of a Dice object
// const = means that this function cannot change the data of the calling object
//         it is an accessor function 	
void Dice::display() const
{
 	 cout << "This dice has " << face << " on top" << endl; 
 }

bool Dice::isGreater(const Dice &other) const
{
	// access the face of the calling object
	// face
	// access the face of the object other
	// other.face
	// call function display() for the calling object
	// display();

	// call function display() for the object other
	// other.display();

} 

/*
Dice & Dice::operator=(const Dice &right)
{
 	 cout << "Inside assignment operator " << endl;
 	 face = right.face;
 	 return *this; // this = pointer to the calling object
}
// Assignment operator
Dice & Dice::operator=(const Dice &right) // returns a reference to a dice object
{
    cout << "Inside assignment operator " << endl;
    face = right.face;
    return *this; // this = pointer to the calling object       
}

// static function to get the count of Dice objects created
 static int Dice::getCountDice(){
    return countDice;
    }
*/


// non-member functions
// overload == operator
bool operator==(const  Dice &right, const Dice &left)
{
    return true;
}

// overload < operator
bool operator<(const Dice &right, const Dice &left)
{
    return true;
}
// overload cout operator
//non-member function:  
ostream& operator<<(ostream &out, const Dice &obj)
{
    return out;
}

	// Review Questions:
    // 1. How to overload operators in C++?
    //    - Overloading operators in C++ is done by defining a function with a specific signature that corresponds to the operator being overloaded. 
    //      The function can be a member function of the class or a non-member function. For example, to overload the equality operator (==), you can define a non-member function like this:
    //      bool operator==(const Dice &right, const Dice &left) {
    //          return right.getFace() == left.getFace();
    //      }
    //      This function compares the face values of two Dice objects and returns true if they are equal, 
    //. and false otherwise. Similarly, you can overload other operators like <, >, +, etc., 
    // by defining appropriate functions with the correct signatures.

    // 2. When to use member functions vs non-member functions for operator overloading?
    //    - Member functions are typically used for operator overloading when the operator modifies the state of the object or when it needs access to the private members of the class. 
    //      For example, the assignment operator (=) is usually implemented as a member function because it modifies the state of the object on the left-hand side. 
    //      Non-member functions are often used for operators that do not modify the state of the object or when you want to allow implicit conversions on the left-hand side of the operator. 
    //      For example, the equality operator (==) can be implemented as a non-member function because it does not modify the state of either object and allows for comparisons between different types if needed. 
    //      In general, the choice between member and non-member functions for operator overloading 
    //     depends on the specific operator being overloaded and the design of the class.

    // 3. What is 'this in C++?
    //    - In C++, 'this' is a pointer that refers to the current object instance within a member function. It is implicitly passed to all non-static member functions and can be used to access the members of the current object. For example, in a member function, you can use 'this->face' to refer to the 'face' data member of the current object.
    // 4. How is this used in operator overloading?
    //    - In operator overloading, 'this' can be used to refer to the current object when implementing member functions for operators. For example, in the assignment operator, you can use 'this' to return a reference to the current object after modifying its state. For instance:
    //    Dice & Dice::operator=(const Dice &right) {
    //        face = right.face; // modify the current object's state
    //        return *this;      // return a reference to the current object
    //    }
    //    Here, '*this' dereferences the 'this' pointer to return a reference to the current object, 
    // which allows for chaining of assignment operations (e.g., a = b =