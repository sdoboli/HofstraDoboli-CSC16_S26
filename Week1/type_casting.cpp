#include <iostream>
#include <typeinfo>   // for typeid

using namespace std;

int main() {

    // ==========================================
    // IMPLICIT TYPE CASTING
    // ==========================================

    int i = 10;
    double d = 3.5;

    // Mixed-type expression
    auto result1 = i + d;   // implicit cast: int → double

    cout << "Implicit casting (int + double)" << endl;
    cout << "Value: " << result1 << endl;
    cout << "Size: " << sizeof(result1) << " bytes" << endl;
    cout << "Type: " << typeid(result1).name() << endl;
    cout << endl;


    // ==========================================
    // IMPLICIT CASTING WITH INTEGER DIVISION
    // ==========================================

    int a = 7;
    int b = 2;

    auto result2 = a / b;   // both int → int division

    cout << "Integer division (int / int)" << endl;
    cout << "Value: " << result2 << endl;
    cout << "Size: " << sizeof(result2) << " bytes" << endl;
    cout << "Type: " << typeid(result2).name() << endl;
    cout << endl;


    // ==========================================
    // EXPLICIT TYPE CASTING
    // ==========================================

    auto result3 = static_cast<double>(a) / b;

    cout << "Explicit casting (double / int)" << endl;
    cout << "Value: " << result3 << endl;
    cout << "Size: " << sizeof(result3) << " bytes" << endl;
    cout << "Type: " << typeid(result3).name() << endl;
    cout << endl;


    // ==========================================
    // CHAR + INT (IMPLICIT CASTING)
    // ==========================================

    char c = 'A';   // ASCII 65
    int num = 5;

    auto result4 = c + num;   // char → int

    cout << "Implicit casting (char + int)" << endl;
    cout << "Value: " << result4 << endl;
    cout << "Size: " << sizeof(result4) << " bytes" << endl;
    cout << "Type: " << typeid(result4).name() << endl;
    cout << endl;


    // ==========================================
    // SUMMARY NOTES (for students)
    // ==========================================
    // - sizeof shows how much memory the result uses
    // - Larger sizes usually indicate promotion to a larger type
    // - typeid(...).name() shows the compiler's internal type name
    // - 'auto' lets the compiler deduce the resulting type
    // ==========================================

    return 0;
}
