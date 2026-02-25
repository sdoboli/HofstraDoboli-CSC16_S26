#include <iostream>
#include <string>
using namespace std;

// INCLUDES THE MONEY AND ACCOUNT CLASS DEFINITIONS

#ifndef CLASSES  
#define CLASSES

class Money{
		
	private:
        int dollars; // >= 0
		int cents;   // >=0 and < 100	
	public: 
		Money (int new_dollars = 0, int new_cents = 0); // Money() - default values are used, Money(5,25) - both specific and default constructor
        Money(const Money &other); // copy constructor //Money m1(5,20); Money m2(m1); // m2 to be a copy of m1 - m2 is a new object, copy constructor is called. 
		void set(int new_dollars, int new_cents); 
        int  get_dollar() const;  
       	int  get_cents()  const;  
        int  get_total_cents() const; // return total cents 
		void add(int add_dollars, int add_cents); 
        Money & operator+=(const Money &m);  
		void subtract(int sub_dollars, int sub_cents);
		Money & operator-=(const Money &m);
        Money & operator=(const Money &m);  		 									   
};
bool operator>(const Money &left, const Money &right); 	
bool operator==(const Money &left, const Money &);
ostream & operator<<(ostream &out, const Money &m);
Money operator+(Money left, const Money &right); // use the += operator 	Money m3 = m1 + m2; 
Money operator-(Money left, const Money &right); // use the -= operator

class Account
{
  	private: 
  	   	Money money;       // no direct access to data members of amount
  	   	string account_id;  // a random string of 10 digits 				
  	
    public: 
  		Account(int start_dollars = 0, int start_cents = 0); // both specific and default constructor
        // Account new_account(5); $5.00  // Account new_account; // 0.00, // Account new_account(5,10) $5.10
        Account(const Account & other); // copy constructor // Account new_account(old_account);
  		Account & operator-=(const Money &amount); // withdraw account -= Money(10,50);
  		Account & operator+=(const Money &amount); // deposit  account += Money(50);
  		void transfer_from(Account &source, const Money &tr_amount);	
        Money get_money() const {return money;};
        string get_id() const {return account_id;};
}; 
bool operator<(const Account &left, const Account &right);
bool operator==(const Account &left, const Account &right);	
ostream & operator<<(ostream &out, const Account &acct); // cout << my_account
#endif
