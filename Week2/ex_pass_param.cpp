// pass_value_ref_template.cpp
// show pass-by-value vs pass-by-reference for primitives, arrays, and strings.
// complete the TODOs to print addresses/values and observe behavior.
// Compile with: g++ -std=c++11 -O0 pass_value_ref_template.cpp -o pass_demo
// Run: ./pass_demo

#include <iostream>
#include <string>

using namespace std;

// ------------------------
// Function prototypes
// ------------------------

// primitive types
void primitiveByValue(int n);
void primitiveByReference(int &n);

// C-style array (arrays decay to pointer when passed by value)
// To show copying vs aliasing we use two variants:
//  - pass array as pointer (decays)       -> always behaves like reference (no copy of contents)
void arrayByReference(int arr[], int size);    


// std::string examples
void stringByValue(string s);
void stringByConstRef(const string &s);

// ------------------------
// Main: create variables and call functions
// ------------------------
int main() {
    cout << "=== pass-by-value vs pass-by-reference ===\n\n";

    // ---------- primitives ----------
    int    a = 42;       
    double d = 3.14;

    cout << "-- in main (primitives) --\n";
    cout << "address of a (main): " << &a << "  value = " << a << "\n";
    cout << "address of d (main): " << &d << "  value = " << d << "\n";

    cout << "\nCall primitiveByValue(a)  // TODO: implement function body\n";
    primitiveByValue(a);
    cout << "\nBack in main after primitiveByValue call. a = " << a << "\n";

    cout << "\nCall primitiveByReference(a)  // TODO: implement function body\n";
    primitiveByReference(a);
    cout << "\nBack in main after primitiveByReference call. a = " << a << "\n";
    cout << "--------------------------------------------------\n\n";

    // ---------- arrays (C-style) ----------
    // Note: passing a C-style array to a function -> you are passing the address of the first item 
    // (no copy of elements of the array is done).
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "-- in main (C-style array) --\n";
    cout << "address of arr (main)      = " << (void*)arr << "\n";
    cout << "address of arr[0] (main)   = " << (void*)&arr[0] << "\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Address of arr[" << i << "] = " << (void*)&arr[i] << "  value = " << arr[i] << "\n";
    }

    cout << "\nCall arrayAsPointer(arr, 5)  // TODO: implement to show parameter address vs caller\n";
    arrayByReference(arr, 5);
    cout << "\nBack in main after arrayAsPointer call." << "\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Address of arr[" << i << "] = " << (void*)&arr[i] << "  value = " << arr[i] << "\n";
    }
    // ---------- std::string ----------
    string s = "hello";

    cout << "-- in main (std::string) --\n";
    cout << "address of s (main)        = " << &s << "  value=\"" << s << "\"\n";

    cout << "\nCall stringByValue(s)  // TODO: implement to observe whether a copy is made\n";
    stringByValue(s);

    cout << "\nCall stringByConstRef(s)  // TODO: implement to observe aliasing (no copy)\n";
    stringByConstRef(s);

    cout << "\nBack in main after string calls. s = \"" << s << "\"\n";
    cout << "=== end ===\n";
    return 0;
}

// ------------------------
// Function stubs: students must complete these
// ------------------------

// primitive by value: parameter is a COPY
void primitiveByValue(int n) {
    // TODO:
    // 1. print the address of the parameter 'n' (use (void*)&n)
    cout << "Address of n (parameter): " << (void*)&n << "\n";
    cout << "Value of n (parameter): " << n << "\n";
    // 2. print the value of 'n'
    n += 5;
    // 4. print the changed value and return
    cout << "Changed value of n (parameter): " << n << "\n";
    // Observe: address of 'n' should be different from address of 'a' in main
}

// primitive by reference: parameter is an ALIAS for caller variable
void primitiveByReference(int &n /* , other refs */) {
    // TODO:
    // 1. print the address of parameter 'n' (should match &a from main)
    cout << "Address of n (parameter): " << (void*)&n << "\n";
    // 2. print the value of 'n'
    cout << "Value of n (parameter): " << n << "\n";
    // 3. modify n (e.g., n += 5)
    n += 5;     
    // 4. print the changed value and return
    cout << "Changed value of n (parameter): " << n << "\n";
    // Observe: change should be visible in main
}

// array passed as pointer (decays) -- behaves like pass-by-reference for the data
void arrayByReference(int arr[], int size) {
    // TODO:
    // 1. print the address of the parameter 'arr' (it is a pointer) -> (void*)arr
    // 2. print address of arr[0] inside function and compare to address in main
    // 3. modify an element, e.g. arr[0] = 999 and show that caller sees it
    cout << "  [arrayAsPointer] TODO: implement\n";
}

// NOTE TO STUDENT: implement a small wrapper to hold an array if you want to demonstrate copying
// e.g.:
// struct Wrapper { int data[5]; };
// Then implement pass-by-value (Wrapper w) and pass-by-const-ref (const Wrapper &w)

// Demonstrate string passed by value (std::string may copy or perform small-string-optimization)
void stringByValue(string s) {
    // TODO:
    // 1. print address of parameter 's' (object on stack) -> (void*)&s
    // 2. print s.c_str() address (pointer to internal characters) -> (void*)s.c_str()
    // 3. modify s (s += " world") and print inside function
    // Observe: whether modification affects main's string (it should not)
    cout << "  [stringByValue] TODO: implement\n";
}

// Demonstrate string passed by const reference (no copy)
void stringByConstRef(const string &s) {
    // TODO:
    // 1. print address of parameter reference (use (void*)&s) -> note: this is the reference object on stack
    // 2. print s.c_str() address (pointer to internal characters)
    // 3. Do NOT modify s (const), but observe addresses match caller's when possible
    cout << "  [stringByConstRef] TODO: implement\n";

    /* Observations:
    - Primitive types passed by value create a copy; changes do not affect caller.
    - Primitive types passed by reference create an alias; changes affect caller.
    - C-style arrays decay to pointers; passing them behaves like pass-by-reference for the data.
    - std::string passed by value may create a copy (depends on implementation); changes do not affect caller.
    - std::string passed by const reference does not create a copy; no changes allowed.
    - In general, passing by reference is more efficient for large data structures to avoid copying.
    - In general, passing objects is done by value or by const reference:
      - Passing by value creates a copy; use for small objects or when modification is needed.
      - Passing objects by const reference allows read-only access without the overhead of copying.
    */
}
