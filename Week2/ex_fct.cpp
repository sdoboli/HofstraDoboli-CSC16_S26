//###########################################
// Sample program with one function
// that returns the maximum of two integers
// Pay attention to:
//         1. function declaration
//         2. function call
//         3. function definition
//###########################################

#include <iostream>
#include <cassert>
using namespace std;

// 1. function declaration 
int max2(int, int);   // function prototype
void print(string msg); // function prototype
int MAX = 100; // global constant variable

int main()
{
	int v1 = 20, v2 = 10, v3 = 0;
    if (v3 != 0)
    {
        double result = (double)v1/v3;
        cout << result << endl;
    }
    
    // 2. function call: values of v1 and v2 are passed
    //    to function max2
    //    return value from max2 is stored in max variable
	int max = max2(v1, v2);
    cout << max << endl;
}

// 3. function definition
// Function header:
// Purpose: return the maximum of two integers
// Input parameters: two integers
// Return value: the larger integer
// Pre-condition: anything that is true when the function is called
//                Both input parameters should be less than MAX
// Post-condition: anything that is true when the function ends
int max2(int v_int1, int v_int2)
{
    // check pre-condition
    assert (v_int1 < MAX && v_int2 < MAX);
    
    // function body
  	if (v_int1 > v_int2)
        return v_int1;
	else
	    return v_int2;
}

// A void function returns nothing (there is no return statement)
void print(string msg) {
    cout << msg << endl;
}   
