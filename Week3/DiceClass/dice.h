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
	
    // overload < operator
    // bool operator<(const Dice &right) const;

    // overload == operator
    // bool operator==(const  Dice &right) const;

	// Assignment operator
	// Dice & operator=(const Dice &right); // returns a reference to a dice object

    // overload cout operator
    // friend ostream & operator<<(ostream &out, const Dice &d);
    // static function to get the count of Dice objects created
    // static int getCountDice();
}
#endif // end of ifndef DICE