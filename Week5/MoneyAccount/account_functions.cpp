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

        Use functions in the Money class to subtract money  		
  	Precondition - you have enough money in the account. If this is not true display an Error message 
                (do not use assert - you don't want the program to terminate). 
      
*/
Account & Account::operator-=(const Money &amount){
     // add your code 
}

/*
  	deposit(const Money &other) 
    Purpose: add other amount to the account 
    Processing: 
            use the function add in the Money class to add to the
            money object 
*/
Account & Account::operator+=(const Money &amount){
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

bool operator<(const Account &left, const Account &right){

}
bool operator==(const Account &left, const Account &right){

}
ostream & operator<<(ostream &out, const Money &m){
    
}

