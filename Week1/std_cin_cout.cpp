#include <iostream>

using namespace std;

int main() {

    // ==============================================
    // STANDARD OUTPUT (cout)
    // ==============================================

    // Python:
    // print("Hello, world")

    // C++:
    cout << "Hello, world" << endl;


    // ==============================================
    // STANDARD INPUT (cin)
    // ==============================================

    // Python:
    // name = input("Enter your name: ")

    // C++:
    string name; // name is a string object
    cout << "Enter your name: ";
    cin >> name;   // reads one word (stops at whitespace)

    cout << "Hello, " << name << endl;


    // ==============================================
    // INPUT WITH NUMBERS
    // ==============================================

    // Python:
    // age = int(input("Enter your age: "))

    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You entered age: " << age << endl;


    // ==============================================
    // MULTIPLE INPUTS
    // ==============================================

    // Python:
    // x, y = map(int, input("Enter two numbers: ").split())

    int x;
    int y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Sum: " << x + y << endl;


    // ==============================================
    // COMMON BEGINNER PITFALLS (COMMENTS ONLY)
    // ==============================================

    // - cin >> skips leading whitespace
    // - cin >> stringVariable reads only ONE word
    // - input order must match variable order
    // - invalid input can put cin into a failed state

    return 0;
}
    