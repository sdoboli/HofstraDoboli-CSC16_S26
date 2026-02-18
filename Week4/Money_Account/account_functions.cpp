#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#include "header.h"

/*
    Default/Specific constructor: 
    Purpose: sets a new account with random id and  $start_dollars.start_cents money
    Processing: 
  		Set id: initialize account_id with empty string
                repeat 10 times 
  		           generate a random integer between 0 and 9 -> n = rand()
  		           convert integer to character char c = '0' + n;
  		           append c to the string account_id
*/
Account::Account(int start_dollars, int start_cents)
: money(start_dollars, start_cents)  // initialization list - calls the specific constructor in Money
{
    cout << "Account constructor" << endl;
    // add your code to set the random account_id
}

/*
    Copy constructor: instantiates a new object with the same data
    as the other object passed as a parameter
*/
Account::Account(const Account & other)
{

}

/*	
    withdraw(const Money &other) 
    Purpose: subtract other money from the account that calls this function
    Processing: 
        Check that you have enough money in the calling account object
            call the function isBigger in the Money class
  	            amount.subtract(minus_dollars, minus_cents);
        Use functions in the Money class to subtract money (the money data member is a Money object)  		
  	Precondition - you have enough money in the account. If this is not true display an Error message 
                (do not use assert - you don't want the program to terminate). 
      
*/
void Account::withdraw(const Money &other)
{
     // add your code 
}

/*
  	deposit(const Money &other) 
    Purpose: add other amount to the account 
    Processing: 
            use the function add in the Money class to add to the
            money object 
*/
void Account::deposit(const Money &other)
{
     // add your code 

}

/*				
  	transfer_from(Account &source, const Money &tr_amount) 
  	Purpose: transfer tr_amount from the source account into the 
             calling object account
    Example function call: a1.transfer_from(a2,m1) 
    Effect: a1 has m1 more money and a2 has m1 less money        
    Processing: use functions you already wrote in Account and Money
  	Precondition: check that enough money are available in object source
                  (use  isBigger function in the Money class )
                  If this is not true display an Error message 
                 (do not use assert - you don't want the program to terminate). 
*/
void Account::transfer_from(Account &source, const Money &tr_amount)
{
    // add your code 
}

/*			
  	isLess(const Money &other) 
    Purpose: returns true if amount in calling object 
  	         is less than amount in other_dollars.other_cents. 
             And false otherwise
    Processing: use functions in the Money account. 
    Called: a1.isLess(a2.money);
    
*/
bool Account::isLess(const Money &other) const
{
    // add your code 
    // money from a1 to money in other
    // other.isBigger(money) check also other == money ;
    return true;
}

/*  	
   operator<=(const Account &other) const
   Purpose: does the same thing as above, but the amount is stored 
            in an Account object other
    Called: a1 <= a2, a1, a2 are Account objects -> a1.operator<=(a2)
    True if money in a1 is less than or equal to money in a2

 */
bool Account::operator<=(const Account &other) const
{
    // add your code 
    // money (money in the calling object (a1))
    // other.money (money in the passed object (a2))
    // call isBigger to compare other.money and money
    return other.money.isBigger(money);

    // fine too !money.isBigger(other.money);
}
/*
    bool isEqual(const Money &other) const
    Purpose: returns true if account has the same amount as other
     Processing: Try using functions already defined the Money or Account classes. 
       
*/
bool Account::isEqual(const Money &other) const
{
    // ADD YOUR CODE HERE
    return true; 
}
/*
    bool Account::operator==(const Account &other) const
    Purpose: returns true if account has the same amount as
             in Account object other
     Processing: use functions in the Money account. 
*/
bool Account::operator==(const Account &other) const
{
    // ADD YOUR CODE HERE
    return true;
}

/*
    Account& Account::operator=(const Account &other) const
    Purpose: Overloads the assignment operator. It is called as a1 = a2, 
    with a1, a2 two Account objects. The result is the amount in a1 object is equal 
    to the amount in the a2 object. The account ids are not changed after a1 = a2.
    
    a1 = a2 = a3 -> a1.operator=(a2.operator=(a3))
*/

Account& Account::operator=(const Account &other)
{
    // ADD YOUR CODE HERE
    if (this == &other) // check for self assignment a1 = a1
        return *this;
    
    money.set(other.money.get_dollar(), other.money.get_cents());

    return *this;
}

/*
    void Account::display()
    Purpose: displays account information
*/
void Account::display() const
{
    cout << "account " << account_id << " has $" << money.get_dollar() << 
         "." << money.get_cents() << endl;
}
