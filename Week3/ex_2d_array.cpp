#include <iostream>

using namespace std;

const int ROWS = 2;
const int COLS = 3;

// Function prototype
void showAddresses(int m[][COLS], int rows);

int main() {
    // Declare and initialize a small 2D array
    int matrix[ROWS][COLS] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    cout << "=== In main() ===\n\n";

    // Print values and addresses in main
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            cout << "matrix[" << r << "][" << c << "] = "
                 << matrix[r][c]
                 << "  address: " << (void*)&matrix[r][c] << endl;
        }
    }

    cout << "\nCalling showAddresses()...\n\n";

    // Pass 2D array to function
    showAddresses(matrix, ROWS);

    return 0;
}

void showAddresses(int m[][COLS], int rows) {
    cout << "=== Inside showAddresses() ===\n\n";

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < COLS; c++) {
            cout << "m[" << r << "][" << c << "] = " << m[r][c]
                 << "  address: " << (void*)&m[r][c] << endl;
        }
    }
}

/*
    Review Questions:
    1. How are 2D arrays declared and initialized in C++?
       - 2D arrays in C++ are declared by specifying the data type followed by the array name 
       and size in square brackets for both dimensions, e.g., int matrix[2][3]; 
       They can be initialized using nested curly braces, e.g., 
       int matrix[2][3] = {{10, 20, 30}, {40, 50, 60}};
    2. HOw are 2D arrays stored in memory?
       - 2D arrays are stored in a contiguous block of memory in row-major order, 
       meaning that the elements of each row are stored in consecutive memory 
       locations before moving to the next row.
    3. How do you access elements in a 2D array?
       - Elements in a 2D array are accessed using two indices: the first index for the row 
       and the second index for the column, e.g., matrix[0][1] accesses the element in 
       the first row and second column.
    4. How are 2D arrays passed to functions in C++?
       - 2D arrays are passed to functions by specifying the array parameter with the 
       number of columns defined, e.g., void functionName(int arr[][COLS], int rows). 
       The number of rows can be passed as a separate parameter.
    5. What do you notice about the memory addresses of the elements when passing a 2D array to a function?
       - The memory addresses of the elements remain consistent between the main function and 
       the called function, indicating that the function receives a reference to the original array 
       rather than a copy.
    6. Why is it important to specify the number of columns when passing a 2D array to a function?
       - Specifying the number of columns is important because it allows the compiler to correctly 
       calculate the memory offsets for accessing elements in the 2D array. Without this information, 
       the compiler would not know how to navigate the rows and columns of the array.
*/