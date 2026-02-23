#include "header.h"
using namespace std;

/* TEST THE MONEY CLASS */

int main()
{
    // test default constructor
    Money zero;
    cout << "TEST DEFAULT CONSTRUCTOR " << zero << endl;
    
    // test specific constructor
    Money non_zero(5,30);
    cout << "TEST SPECIFIC CONSTRUCTOR " << non_zero << endl;

    // test add function
    Money m1(5,50);
    m1.add(10,80); // expect $16.30
    cout << "TEST ADD " << m1 << endl;

    // test subtract function
    m1.subtract(10,80);
    cout << "TEST SUBTRACT " << m1 << endl;

    // test += 
    Money add(10,80);
    m1 += add;
    cout << "TEST += " << m1 << endl;
    
    // test -= 
    Money sub(10,80);
    m1 -= sub;
    cout << "TEST -= " << m1 << endl;

    // test = 
    Money m2(10,50);
    m1 = m2; 
    cout << "TEST = $10.50 " << m1 << endl;

    // test >

    // test ==

    // test +

    // test - 

}