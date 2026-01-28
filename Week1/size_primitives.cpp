#include <iostream>

using namespace std;

int main() {

    // ==========================================
    // PRIMITIVE DATA TYPES IN C++
    // ==========================================
    // Primitive types store simple values directly in memory.
    // The size of each type depends on the system and compiler.
    // sizeof(type) returns the number of BYTES used.
    // ==========================================

    // -------- Integer types --------
    int   i = 0;
    short s = 0;
    long  l = 0;
    long long ll = 0;

    cout << "int size: "   << sizeof(int)   << ' ' << sizeof(i) << " bytes" << endl;
    cout << "short size: " << sizeof(short) << " bytes" << endl;
    cout << "long size: "  << sizeof(long)  << " bytes" << endl;
    cout << "long long size: " << sizeof(long long) << " bytes" << endl;


    // -------- Floating-point types --------
    float f = 0.0f;
    double d = 0.0;
    long double ld = 0.0;

    cout << "float size: " << sizeof(float) << " bytes" << endl;
    cout << "double size: " << sizeof(double) << " bytes" << endl;
    cout << "long double size: " << sizeof(long double) << " bytes" << endl;


    // -------- Character and boolean types --------
    char c = 'A';
    bool b = true;

    cout << "char size: " << sizeof(char) << " bytes" << endl;
    cout << "bool size: " << sizeof(bool) << " bytes" << endl;


    // -------- TODO --------
    // 1. Add unsigned versions of integer types
    // 2. Try sizeof(variable) instead of sizeof(type)
    // 3. Run this program on different machines (Windows vs Mac)
    // 4. Convert bytes to bits (1 byte = 8 bits)
    // 5. Research why sizes are not guaranteed to be the same everywhere
    unsigned int ui = 100; // only positive values and 0
    unsigned short usi = 50; 
    cout << "unsigned int size " << sizeof(ui) << endl;
    cout << "unsigned short int size " << sizeof(usi) << endl;

    return 0;
}
