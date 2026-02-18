#include <iostream>
#include <string>
#include <cstdlib>
#include <random>
#include <ctime>
using namespace std;
#include "header.h"

int main()
{
    srand(time(NULL));
    cout << "TEST ACCOUNT CLASS \n";
    // ADD CODE FOR EACH NUMBERED COMMENT LINES

    // Declare an Account object called my_account with $80.50.
    Account my_account(80,50);
    cout << "my_account "; 
    // 2. Add code to display my_account. 
    // 3. Add $20.75 amount to my_account. Call function deposit in the Account class 
    cout << "my_account  ";
    // 4. Display the amount in my_account.
    
    Money test_money(101, 25);
    // uncomment line below: 
    // cout << "TEST DEPOSIT $20.75 " << (my_account.isEqual(test_money) ? "PASSED ": "NOT PASSED")<< endl;
    
    Account my_savings(200,0);
    // 5. Withdraw from my_savings the amount $5.50 (call function withdraw)
    cout << "my_savings ";
    // 6. Display the amount in my_savings.
    Money test_sub_money(194,50);
    // uncomment line below: 
    // cout << "TEST WITHDRAW $5.50 " << (savings.isEqual(test_sub_money) ? "PASSED ": "NOT PASSED")<< endl;

    // 7. Transfer $15.75 from my_savings account into my_account: call function 
    //    transfer_from
    cout << "my_account ";
    my_account.display();
    cout << "my_savings ";
    my_savings.display();
    // uncomment line below
    // cout << "TEST TRANSFER INTO savings " << (savings.isEqual(Money(178, 75)) ? "PASSED ": "NOT PASSED")<< endl;  

    cout << "\nTEST WITHDRAW TOO MUCH MONEY " << endl;
    my_account.withdraw(Money(200,0));

    cout << "\nTEST TRANSFER TOO MUCH MONEY " << endl;
    my_account.transfer_from(my_savings, Money(200,0));

    cout << "\nTEST <= operator" << endl;
    cout << "\tIs my_account <= my_savings? " << endl;
    // 8. Add code to check if my_account is <= to my_savings
    //    Display "Yes" if my_account <= my_savings 
    //    Display "No" if my_account > my_savings 
    
    cout << "\nTEST == operator" << endl;
    cout << "\tIs my_account == my_savings ? " << endl;
    // 9. Add code to check if my_account is == to my_savings
    //    Display "Yes" if my_account == my_savings
    //    Display "No" if my_account is not equal to my_savings

    cout << "\nTEST assignment operator" << endl;
    cout << "Before assignment " << endl;
    my_account.display();
    my_savings.display();
    // 10. Add code to assign my_savings to my_account. 
    cout << "\nAfter assignment " << endl;
    my_account.display();
    my_savings.display();

    /* Declare a dynamic array of 5 Money objects */
    cout << "\nDynamic array of Money objects\n" << endl;
    Money *ptr_money = new Money[5]; // ptr_money is a pointer to Money and it contains the memory 
                                    // address of the first Money object in the array

   cout << endl;
   for (int i = 0; i < 5; i++)
   {
      ptr_money[i].add(10,50);
      ptr_money[i].display();
   }

   /* Declare a dynamic array of 5 Account objects */
    cout << "\nDynamic array of Account objects\n" << endl;
    Account *ptr_accounts = new Account[5]; // ptr_money is a pointer to Money and it contains the memory 
                                    // address of the first Money object in the array

   cout << endl;
   for (int i = 0; i < 5; i++)
   {
      ptr_accounts[i].deposit(Money(10,50));
      ptr_accounts[i].display();
   }

   /* Instantiate an Account object in dynamic memory */
   cout << "\nNew Account object in dynamic memory\n" << endl;
   Account *ptr_account = new Account(1000,0);
   cout << "Before deposit ($1000.00)" << endl;
   ptr_account->display();
   (*ptr_account).deposit(ptr_money[1]);
   cout << "After $10.50 deposit " << endl;
   ptr_account->display();

}