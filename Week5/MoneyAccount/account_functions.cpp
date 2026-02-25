#include <iostream>
#include <string>
#include <cstdlib>
#include <random>
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
    // random string of 10 digits (integers between 0 and 9)
    account_id = "";
    for (int i = 0; i < 10; i++){
        // generate a random integer between 0 and 9
        int digit   = rand() % 10; 
        char ch_num = static_cast<char>('0' + digit);
        // convert it to a character and add it to the end of account_id string
        account_id.push_back(ch_num);
    }
}

/*
    Copy constructor: instantiates a new object with the same data
    as the other object passed as a parameter
*/
Account::Account(const Account & other)
: money(other.money), account_id(other.account_id)
{}

/*	
    -=(const Money &other) 
    Purpose: subtract other money from the account that calls this function
    Processing: 
        Check that you have enough money in the calling account object

        Use functions in the Money class to subtract money  		
  	Precondition - you have enough money in the account. If this is not true display an Error message 
                (do not use assert - you don't want the program to terminate). 
      
*/
Account & Account::operator-=(const Money &amount){
    // if you have enough money in the Account object (> amount)
    if (amount > money){
        cout << "Sorry, you don't have enough money in the account to withdraw" << amount << endl;
        return *this;
    }
    money -= amount;  // -= operator in the Money class
    return *this;
}

/*
  	deposit(const Money &other) 
    Purpose: add other amount to the account 
    Processing: 
            use the function add in the Money class to add to the
            money object 
*/
Account & Account::operator+=(const Money &amount){
     // add your code 
    money += amount; // += operator in the Money class
    return *this;
}

/*				
  	transfer_from(Account &source, const Money &tr_amount) 
  	Purpose: transfer tr_amount from the source account into the 
             calling object account
    Example function call: a1.transfer_from(a2,m1) 
    Effect: a1 has m1 more money and a2 has m1 less money        
    Processing: use functions you already wrote in Account and Money
  	Precondition: check that enough money are available in object source
                  If this is not true display an Error message 
                 (do not use assert - you don't want the program to terminate). 
*/
void Account::transfer_from(Account &source, const Money &tr_amount)
{
    // source has more or equal amount to tr_amount
    if (tr_amount > source.money){
        cout << "Sorry, you don't have enough money in the account to transfer" << tr_amount << endl;
        return;
    }
    source.money  -= tr_amount; // withdraw tr_amount from source
    (*this).money += tr_amount;        // deposit tr_amount into money of the calling Account object 
}

//non-member functions - you can only access public members
bool operator<(const Account &left, const Account &right){
    return (right.get_money() > left.get_money() && !(right.get_money() == left.get_money()));  
}
bool operator==(const Account &left, const Account &right){
    return left.get_money() == right.get_money();
}
ostream & operator<<(ostream &out, const Account &acct){
    out << "Account " << acct.get_id() << " has " << acct.get_money() << " in it.";
    return out;
}

