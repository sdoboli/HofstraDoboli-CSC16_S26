#include <iostream>

using namespace std;

// Dimensions: all must be constants for stack allocation
const int DEPTH = 2;   // number of layers (first index)
const int ROWS  = 2;   // rows per layer (second index)
const int COLS  = 3;   // columns per row (third index)

// Prototype: when passing a 3D array to a function, the compiler needs ROWS and COLS
void show3DAddresses(int a[][ROWS][COLS], int depth);
void modify3D(int a[][ROWS][COLS], int depth, int newValue);

int main() {
    // Initialize a small 3D "volume": depth × rows × cols
    int vol[DEPTH][ROWS][COLS] = {
        {   // layer 0
            {10, 11, 12},
            {13, 14, 15}
        },
        {   // layer 1
            {20, 21, 22},
            {23, 24, 25}
        }
    };

    cout << "=== In main(): values and addresses ===\n\n";

    // Print values and addresses in main()
    for (int d = 0; d < DEPTH; ++d) {
        cout << "Layer " << d << ":\n";
        for (int r = 0; r < ROWS; ++r) {
            for (int c = 0; c < COLS; ++c) {
                cout << " vol[" << d << "][" << r << "][" << c << "] = "
                     << vol[d][r][c]
                     << "   addr: " << (void*)&vol[d][r][c] << "\n";
            }
        }
        cout << "\n";
    }

    cout << "Calling show3DAddresses(vol, DEPTH)...\n\n";
    show3DAddresses(vol, DEPTH);

    cout << "\nModify element vol[1][0][1] via modify3D(...)\n";
    modify3D(vol, DEPTH, 999);

    cout << "\nBack in main() after modify3D:\n";
    cout << " vol[1][0][1] = " << vol[1][0][1]
         << "   addr: " << (void*)&vol[1][0][1] << "\n";

    return 0;
}

// Print addresses & values inside a function (proves no copy is made)
void show3DAddresses(int a[][ROWS][COLS], int depth) {
    cout << "=== Inside show3DAddresses() ===\n\n";
    for (int d = 0; d < depth; ++d) {
        cout << "Layer " << d << ":\n";
        for (int r = 0; r < ROWS; ++r) {
            for (int c = 0; c < COLS; ++c) {
                cout << " a[" << d << "][" << r << "][" << c << "] = "
                     << a[d][r][c]
                     << "   addr: " << (void*)&a[d][r][c] << "\n";
            }
        }
        cout << "\n";
    }
}

// Demonstrate modification inside function affects main's array
void modify3D(int a[][ROWS][COLS], int depth, int newValue) {
    // pick element [1][0][1] if dimensions allow
    if (depth > 1 && ROWS > 0 && COLS > 1) {
        cout << " modify3D: before change a[1][0][1] = " << a[1][0][1]
             << " at " << (void*)&a[1][0][1] << "\n";
        a[1][0][1] = newValue;
        cout << " modify3D: after  change a[1][0][1] = " << a[1][0][1]
             << " at " << (void*)&a[1][0][1] << "\n";
    } else {
        cout << " modify3D: array too small to modify [1][0][1]\n";
    }
}
/*
    Review Questions:
    1. How are 3D arrays declared and initialized in C++?
       - 3D arrays in C++ are declared by specifying the data type followed by the array name 
       and sizes in square brackets for all three dimensions, e.g., int volume[2][3][4]; 
       They can be initialized using nested curly braces, e.g., 
       int volume[2][2][3] = {{{10,11,12},{13,14,15}},{{20,21,22},{23,24,25}}};
    2. How are 3D arrays stored in memory?
       - 3D arrays are stored in a contiguous block of memory in row-major order, 
       meaning that the elements of each row are stored in consecutive memory locations, 
       followed by the next row in the same layer, and then moving to the next layer.
    3. How do you access elements in a 3D array?
       - Elements in a 3D array are accessed using three indices: the first index for the depth (layer), 
       the second index for the row, and the third index for the column, e.g., volume[0][1][2] accesses 
       the element in layer 0, row 1, column 2.
    4. How are 3D arrays passed to functions in C++?
       - When passing 3D arrays to functions in C++, you need to specify the sizes of all dimensions 
       except for the first one (depth) in the function parameter list. The array decays to a pointer 
       to its first element, allowing the function to access and modify the original array elements.
*/