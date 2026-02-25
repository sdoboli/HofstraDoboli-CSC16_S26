#include <iostream>
#include <string>
#include <cstdlib>
#include <random>
#include <ctime>
using namespace std;
#include "header.h"

int main()
{
    srand(time(NULL)); // initializes the seed for the random number generator algorithm
                       // with current time
    cout << "TEST ACCOUNT CLASS \n";
    // ADD CODE FOR EACH NUMBERED COMMENT LINES

    // Declare an Account object called my_account with $80.50.
    Account my_account(80,50);
    cout << my_account << endl; 
    
    // 2. Add code to display my_account. 
    // 3. Add $20.75 amount to my_account. Use operator += in the Account class 
    my_account += Money(20,75);
    cout << my_account << endl;
        
    Money test_money(101, 25);
    // uncomment line below: 
     cout << "TEST DEPOSIT $20.75 " << ((my_account.get_money() == test_money) ? "PASSED ": "NOT PASSED")<< endl;
    
    Account my_savings(200,0);
    // 5. Withdraw from my_savings the amount $5.50 (call operator -=)
    my_savings -= Money(5,50);
    cout << my_savings << endl;
    // 6. Display the amount in my_savings.
    Money test_sub_money(194,50);
    // uncomment line below: 
    cout << "TEST WITHDRAW $5.50 " << ((my_savings.get_money() == test_sub_money) ? "PASSED ": "NOT PASSED")<< endl;

    // 7. Transfer $15.75 from my_savings account into my_account: call function 
    //    transfer_from
    cout << "my_account " << my_account << endl;
    cout << "my_savings " << my_savings << endl;
  
    my_account.transfer_from(my_savings, Money(15,75));
    // uncomment line below
    cout << "TEST TRANSFER INTO savings " << ((my_savings.get_money() == Money(178, 75)) ? "PASSED ": "NOT PASSED")<< endl;  


    cout << "\nTEST WITHDRAW TOO MUCH MONEY " << endl;
    my_account -= Money(200,0);

    cout << "\nTEST TRANSFER TOO MUCH MONEY " << endl;
    my_account.transfer_from(my_savings, Money(200,0));

    cout << "\nTEST <= operator" << endl;
    cout << "\tIs my_account <= my_savings? " << endl;
    // 8. Add code to check if my_account is <= to my_savings
    //    Display "Yes" if my_account <= my_savings 
    //    Display "No" if my_account > my_savings 
    if (my_account < my_savings || my_account == my_savings){
        cout << "Yes\n";
    }
    else
        cout << "No\n";

    
    cout << "\nTEST == operator" << endl;
    cout << "\tIs my_account == my_savings ? " << endl;
    // 9. Add code to check if my_account is == to my_savings
    //    Display "Yes" if my_account == my_savings
    //    Display "No" if my_account is not equal to my_savings
    if (my_account == my_savings){
        cout << "Yes\n";
    }
    else
        cout << "No\n";
    /*
    cout << "\nTEST assignment operator" << endl;
    cout << "Before assignment " << endl;
    my_account.display();
    my_savings.display();
    // 10. Add code to assign my_savings to my_account. 
    cout << "\nAfter assignment " << endl;
    my_account.display();
    my_savings.display();
    */
}