#include <iostream>
#include <cstdlib>   

using namespace std;

int init_global_int = 10;
int uninit_global_int;

int f1(int a, int b){
    int c = a + b;
    cout << "\tInside f1 function:" << endl;
    cout << "\tAddress of a: " << &a << endl;
    cout << "\tAddress of b: " << &b << endl;
    cout << "\tAddress of c: " << &c << endl;
    cout << "\t------------------------"  << endl;
    return c;
}

int f2(int x){
    int y = x * 2;
    cout << "\tInside f2 function:" << endl;
    cout << "\tAddress of x: " << &x << endl;
    cout << "\tAddress of y: " << &y << endl;
    cout << "------------------------"  << endl;
    return y;
}

int main(){
    int num1 = 3,
        num2 = 4;
    cout << "Inside main function:" << endl;
    cout << "Address of num1: " << &num1 << endl;
    cout << "Address of num2: " << &num2 << endl;
    cout << "------------------------" <<  endl;

    cout << "Calling f1 function:" << endl;
    cout << "------------------------" <<  endl;
    int result1 = f1(num1, num2);
    cout << "Result: " << result1 << endl;
    cout << "Address f result1: " << &result1 << endl;
    cout << "------------------------" <<  endl;

    cout << "Calling f2 function:" << endl;
    cout << "------------------------" <<  endl;
    int result2 = f2(result1);
    cout << "Result: " << result2 << endl;
    cout << "Address f result2: " << &result2 << endl;
    cout << "------------------------" <<  endl;

    cout << "Global Variables:" << endl;
    cout << "Address of init_global_int: " << &init_global_int << endl;
    cout << "Address of uninit_global_int: " << &uninit_global_int << endl;
    cout << "------------------------" <<  endl;

    /*
    OBSERVATIONS:
    - Each function has its own stack frame with its own local variables.
    - The addresses of local variables in different functions are different.
    - Parameters are passed by value, so changes to parameters inside functions do not affect the original
    - The stack memory grows downward (addresses decrease with each new parameter or local variable added).
    - Global variables are stored in a different memory segment (data segment) than local variables (stack segment).
    */ 
}