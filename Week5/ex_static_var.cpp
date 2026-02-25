#include <iostream>
using namespace std;

void counter() {
    static int x = 0;
    cout << "Address " << &x << "  Value = " << x << ' ';
    x++;
    cout << x << "";
}

int main() {

    cout << "Calling counter() 3 times: ";
    for (int i = 0; i < 3; i++) {
        counter();
    }
    cout << endl;
    return 0;
}
/*
  Review Questions:
1. What does the 'static' keyword do when applied to a local variable inside a function?
   - The 'static' keyword causes the variable to retain its value between function calls. 
   It is initialized only once and exists for the lifetime of the program, but its scope is limited to the function in which it is declared.

2. How does the behavior of a static local variable differ from a regular local variable?
   - A regular local variable is created and initialized each time the function is 
   called, and it is destroyed when the function exits. Local variables are stored on
   the stack frame. 
   In contrast, a static local variable is initialized only once and retains its 
   value across multiple calls to the function. This means that changes to a 
   static local variable persist between function calls, while changes 
   to a regular local variable do not. Static variables are stored in a separate 
   area of memory (the data segment) rather than on the stack.

3. What happens to the value of a static local variable between function calls?
   - The value of a static local variable is preserved between function calls.
   When the function is called again, the static variable retains the value it had 
   from the previous call.
*/