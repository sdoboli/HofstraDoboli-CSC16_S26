#include <iostream>
#include <cstring>   // For strlen, strcpy, strcat, strcmp
using namespace std;

int main() {
    // Declare and initialize C-style strings
    char first[20] = "Hello"; // strlen(first) = 5 counts characters in the string without '/0'
    char second[20] = "World";
    char combined[50];

    // Copy first into combined
    strcpy(combined, first);
    
    cout << "Combined string after strcpy: " << combined << endl;
    cout << "Length of combined string: "    << strlen(combined) << endl;

    // Add a space
    strcat(combined, " ");
    cout << "Combined string after adding space: " << combined << endl;

    // Concatenate second
    strcat(combined, second);
    cout << "Combined string after strcat: " << combined << endl;
    cout << "Length: " << strlen(combined) << endl;

    // Comparison
    cout << "Comparing first and second: ";
    int compare_result = strcmp("Alex", "Alexa");
    if (compare_result == 0) { 
        // do not compare them (first == second) - this compares the addresses of 
        // the two arrays, not their contents
        // strcmp compares two strings character by character and returns 
        // 0 if they are equal, 
        // a negative value if the first string is less than the second, 
        // and a positive value if the first string is greater than the second.
        cout << "Strings are equal\n";
    } else if (compare_result < 0) {
        cout << "First string is less than second " << compare_result << endl;
    } else {
        cout << "First string is greater than second " << compare_result << endl;
    }

    // Input (single word only)
    char name[30];
    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello, " << name << endl;
    cout << "Length of your name: " << strlen(name) << endl;
    
}

/*
  Review Questions:
  1. What are C-style strings and how are they represented in memory?
     - C-style strings are arrays of characters terminated by a null character '\0'. 
     They are stored in contiguous memory locations, and the null terminator indicates the end of the string.
  2. How do you declare and initialize C-style strings in C++?
     - C-style strings can be declared as character arrays, e.g., char str[20]; and initialized using 
     string literals,  e.g., char str[20] = "Hello";
  3. What are some common functions for working with C-style strings and what do they do?
     - strlen: returns the length of the string (not counting the null terminator)
     - strcpy: copies one string to another
     - strcat: concatenates (appends) one string to another
     - strcmp: compares two strings and returns 0 if they are equal, a negative value if 
        the first string is less than the second, and a positive value if the first string 
        is greater than the second.
    - strncpy, strncat, strncmp: safer versions of the above functions that take a size parameter to prevent buffer overflows.
    e.g., strncpy(dest, src, n) copies at most n characters from src to dest, ensuring that dest is null-terminated if n is greater than 0.
    e.g., strncat(dest, src, n) appends at most n characters from src to dest, ensuring that dest is null-terminated if n is greater than 0
    e.g., strncmp(str1, str2, n) compares at most n characters of str1 and str2.

  4. What are some potential issues with using C-style strings and how can you avoid them?
     - Potential issues include buffer overflows (if the string exceeds the allocated size), 
     - forgetting to null-terminate the string, and difficulty in managing memory. 
     - To avoid these issues,  use safer functions like strncpy and strncat, 
     always ensure that your strings are properly null-terminated, 
     
    5. How do you read input into a C-style string and what are the limitations of this approach?
       - You can read input into a C-style string using:
        a)  cin >> name; or 
        b) fgets(name, sizeof(name), stdin); // sizeof(name) gives the size of the allocated memory preventing overflow
        c) cin.getline(str, sizeof(str));  
       The limitation of using cin is that it will only read a single word (up to the first whitespace), 
       Using cin without proper checks can lead to buffer overflows if the input exceeds 
       the allocated size of the string.
       To safely read input, you should always ensure that the buffer size is sufficient.

        cin.getline(str, sizeof(str)) reads a line of input into a C-style string while preventing buffer 
        overflow.
    6. How are C style strings passed to functions in C++?
       - C-style strings are passed to functions by reference (the address of the first character of the string. 
       When you pass a C-style string to a function, you are passing the address of the first character, and the function can access the entire string by following the characters until it reaches the null terminator. 
       This means that when you pass a C-style string to a function, you are effectively passing it by reference, allowing the function to modify the contents of the string if needed.
       For example, if you have a function void modifyString(char str[]) { ... }, you
*/