#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize string objects

    string name1 = "";
    //cout << "Name: " << name1.at(0) << endl;

    string first = "Hello";
    string second = "World";

    // Concatenation using +
    string combined = first + " " + second;

    cout << "Combined string: " << combined << endl;

    // Length
    cout << "Length: " << combined.length() << endl;

    // Comparison
    if (first == second) {
        cout << "Strings are equal\n";
    } else {
        cout << "Strings are different\n";
    }

    // Input (full line)
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Hello, " << name << endl;

    return 0;
}
/*
  Review Questions:
  1. What are C++ string objects and how do they differ from C-style strings?
     - C++ string objects are instances of the std::string class, which provides a more convenient 
     and safer way to work with strings compared to C-style strings (character arrays). 
     C++ strings manage their own memory, can be easily concatenated, compared, 
     and have built-in functions for common string operations, while C-style strings 
     require manual management of memory and use null terminators to indicate 
     the end of the string.
  2. How do you declare and initialize C++ string objects?
     - C++ string objects can be declared using the std::string type, e.g., 
     string str; and initialized using string literals, e.g., string str = "Hello";
  3. What are some common operations you can perform on C++ string objects?
     - Common operations include concatenation (using + operator), length 
     (using length() or size() method), comparison (using == operator), 
     substring extraction (using substr() method), finding substrings 
     (using find() method), and input/output operations (using cin and cout).
     - C++ strings also support various member functions for manipulation, 
     such as append(), insert(), erase(), replace(), and more, which provide 
     powerful tools for working with strings in C++.
     - Additionally, C++ strings can be easily converted to C-style strings 
     using the c_str() method when needed for compatibility with 
     C-style string functions.
4. How do you read input into a C++ string object and what are the advantages of 
this approach?
   - You can read input into a C++ string object using the getline() function, 
   which allows you to read an entire line of input, including spaces. 
  
   This is advantageous compared to using cin >> str; which only reads input 
   until the first whitespace, making it unsuitable for multi-word strings. 
   
   Using getline() ensures that you capture the full input as intended, and it 
   also handles memory management for you, reducing the risk of buffer overflows 
   that can occur with C-style strings.

   e.g., string name; getline(cin, name); reads a full line of input into the string object 'name'.
 5. How are strings passed to functions in C++ and what are the implications of passing by value vs passing by reference?
    - Strings can be passed to functions either by value or by reference. 
    - Passing by value creates a copy of the string object, which can be 
        inefficient for large strings, and modifications to the string inside 
        the function do not affect the original string in the caller.
    - Passing by reference (using const string& for read-only access or string& 
    for modifiable access) allows the function to operate on the original string 
    without creating a copy, which is more efficient. 
    - When passing by const reference, the function cannot modify the string, 
    ensuring that the caller's data remains unchanged while still avoiding 
    the overhead of copying.
*/
