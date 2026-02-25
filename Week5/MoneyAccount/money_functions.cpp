#include <iostream>
#include <string>
#include <cassert>
using namespace std;
#include "header.h"

				
/*
    Specific & Default constructor: initializes a new object to $new_dollars.new_cents 
	Precondition new_dollars >=0 and new_cents >=0 and < 100
*/
Money::Money (int new_dollars, int new_cents)
{
    assert (new_dollars >= 0);
    assert (new_cents >= 0 && new_cents < 100);
    cout << "Specific and Default Money constructor\n";
    dollars = new_dollars;
    cents   = new_cents;
}

/* 
Copy constructor
Constructs a new object as a copy of 
an existing Money object called other (same data, different object) 
Money m1(10,5);
Money m2(m1);  (m2 to contain 10 dollars and 5 cents)
*/
Money::Money(const Money &other){
    //cout << "Copy Money constructor\n";
    dollars = other.dollars;
    cents   = other.cents;
}

/*
Set a money account to new_dollars and new_cents
Preconditions for new_dollars and new_cents
*/
void Money::set(int new_dollars, int new_cents){
    assert(new_dollars >= 0);
    assert(new_cents >= 0 && new_cents < 100);

    dollars = new_dollars;
    cents   = new_cents;    
}

// returns the dollar amount
int Money::get_dollar() const{   
    return dollars;
}
// returns the cents amount	
int Money::get_cents()  const{
    return cents;
}

// returns the total amount of cents
int Money::get_total_cents() const{ 
    return dollars * 100 + cents; // convert everything to cents
}

/*	
	Purpose: adds amount to Money object 
    Make sure you adjust the dollars and cents amounts. 
    Example: $123.55 + $1.49 = $125.04
	Precondition: add_dollars >= 0 and add_cents >=0
	Postcondition: calling Money object will be modified
    Money m1(5,30);
    m1.add(3,80);  // m1: $ = 9 cents = 10
*/
void Money::add(int add_dollars, int add_cents)
{
    assert(add_dollars >= 0);
    assert(add_cents >= 0);

    cents   += add_cents;    // cents = 110
    dollars += add_dollars; // dollars = 8 

    if (cents >= 100){ // determine how many dollars (multiples of 100 cents) are in cents
        int new_dollars = cents / 100; // cents = 110, new_dollars = 110/100 = 1         
        int new_cents   = cents % 100; // new_cents = 10

        dollars += new_dollars;
        cents  = new_cents; 
    }
}

// add a money amount to the calling object
// Money m1(5,30), m2(3,80)
// m1 += m2  // m1.operator+=(m2)   // m1: $9.10, 'this' is a reference to m1 (calling object)
Money & Money::operator+=(const Money & m){
    (*this).add(m.dollars, m.cents);  // this->add(m.dollars, m.cents);
    return *this;
}

/*	
	Purpose: subtract amount to Money object
            Make sure you adjust the dollars and cents amounts. 
            Example: $123.55 - $1.60 = $121.95
	Precondition: sub_dollars >= 0 and sub_cents >=0 and < 100
		          And $dollars.cents is more than $sub_dollars.sub_cents
    Postcondition: calling Money object will be modified
    Money m1(3,20);
    m1.subtract(2,50); // m1 = $0.70
*/
void Money::subtract(int sub_dollars, int sub_cents){
    assert(sub_dollars >= 0);
    assert(sub_cents >= 0 && sub_cents < 100);

    int this_cents = (*this).get_total_cents();
    int sub_total_cents = sub_dollars * 100 + sub_cents;

    assert(this_cents >= sub_total_cents);

    this_cents -= sub_total_cents;
   
    dollars = this_cents / 100;
    cents   = this_cents % 100;
    //cout << this_cents << ' ' << dollars << ' ' << cents << endl;
}

// subtract the Money amount from the calling object if they are enough
// assert precondition that you have enough money in the calling Money object
// m1 -= m2; // m1.operator-=(m2)
Money & Money::operator-=(const Money &m){
    assert((*this) > m || (*this) == m);
    (*this).subtract(m.dollars, m.cents);
    return *this;
}
// assignment operator: the calling object has the same money as the passed object
// Money m1(5,10), m2(3,20);
// m1 = m2; m1 $3.20 (same as m2)
Money & Money::operator=(const Money &m){
    dollars = m.dollars;
    cents   = m.cents;

    return *this;
}
// non-member operators -> no access to private members of the class Money
bool operator>(const Money &left, const Money &right){
    return left.get_total_cents() > right.get_total_cents(); 
}

bool operator==(const Money &left, const Money &right){
    return left.get_total_cents() == right.get_total_cents();
}

// Money m1(10,30);
// cout << m1 << endl; // operator<<(cout, m1);
ostream & operator<<(ostream &out, const Money &m){
    out << "$" << m.get_dollar() << "." << m.get_cents();
    return out; 
}

// Money m1(10,0), m2(5,30);
// Money m3 = m1 + m2; m3 = operator+(m1,m2)
// function returns a Money object (not a reference)
// Why not a reference? Because we are not changing an existing object, we are creating a new one
Money operator+(Money left, const Money &right){ // use the += operator 	
    left += right; // left is a copy or m1 object, right is a reference to a constant m2 object 
                   // adding the money from right to the left Money object
    return left;   // return a copy of the left object. // (no) return left object, (no) return reference to left object -> no, because left is a local variable, 
                                                        // gone from memory after the function is done
                                                        // DO NOT RETURN REFERENCES TO LOCAL VARIABLES 
}

Money operator-(Money left, const Money &right){ // use the -= operator
    left -= right;
    return left; 
}
