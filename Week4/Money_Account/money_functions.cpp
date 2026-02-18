#include <iostream>
#include <string>
using namespace std;
#include "header.h"

/* 
    Default constructor: initializes a new object to $0.00
*/
Money::Money()
{
    cout << "Default Money constructor\n";

}
				
/*
    Specific constructor: initializes a new object to $new_dollars.new_cents 
	Precondition new_dollars >=0 and new_cents >=0 and < 100
*/
Money::Money (int new_dollars, int new_cents)
{
    cout << "Specific Money constructor\n";

}

/* 
Copy constructor
Constructs a new object as a copy of 
an existing Money object called other (same data, different object) 
*/
Money::Money(const Money &other){
     cout << "Copy Money constructor\n";
}

/*	
	Purpose: adds amount to Money object 
    Make sure you adjust the dollars and cents amounts. 
    Example: $123.55 + $1.49 = $125.04
	Precondition: add_dollars >= 0 and add_cents >=0 and < 100
	Postcondition: calling Money object will be modified
*/
void Money::add(int add_dollars, int add_cents)
{

}

/*		
	Purpose: does the same as function add above but it receives another
	Money object as input
	You can call the function above: add(add_money.dollars, add_money.cents) 
*/
void Money::add(const Money &add_money)
{

}

/*	
	Purpose: subtract amount to Money object
            Make sure you adjust the dollars and cents amounts. 
            Example: $123.55 - $1.60 = $121.95
	Precondition: sub_dollars >= 0 and sub_cents >=0 and < 100
		          And $dollars.cents is more than $sub_dollars.sub_cents
    Postcondition: calling Money object will be modified
*/
void Money::subtract(int sub_dollars, int sub_cents)
{

}

/*
    Purpose: Does the same as function subtract above but it receives
	the another Money object as input
	You can call the function above:  subtract(sub_money.dollars, sub_money.cents) 
*/
void Money::subtract(const Money &sub_money)
{

}
				
/*  
    Displays object amount as $dollars.cents
*/
void Money::display() const
{

}
														   
int Money::get_dollar() const   // returns the dollar amount
{
    return 0;
}
int Money::get_cents()  const    // returns the cents amount	
{
    return 0;
}

/*		
Purpose: returns true if amount stored in calling object is 
		bigger than the amount in parameter object other
*/
bool Money::isBigger(const Money &other) const
{
    if (dollars > other.dollars)
        return true;
    else if (dollars == other.dollars)
    {
        if (cents > other.cents)
            return true;
        else
            return false;
    }
    return false;
}		

bool Money::operator==(const Money &other) const
{
    if (dollars == other.dollars  && cents == other.cents)
        return true;
    else
        return false;
}

void Money::set(int new_dollars, int new_cents)
{
    
}
