#include <iostream>

using namespace std;

// ==================================================
// CONSTANTS FOR IMAGE SIZE (STACK ALLOCATION)
// ==================================================

const int ROWS = 5;
const int COLS = 5;

// ==================================================
// FUNCTION PROTOTYPES
// ==================================================

// Print the 2D image to the screen
void printImage(int img[][COLS], int rows);

// Invert the image values (example: 0–9 becomes 9–value)
void invertImage(int img[][COLS], int rows);

// Draw a box (border) around the image
void drawBox(int img[][COLS], int rows);

// EXTENSION:
// Draw an X  across the image
void drawX(int img[][COLS], int rows);

// ==================================================
// MAIN FUNCTION
// ==================================================
int main() {

    // ----------------------------------------------
    // Declare and initialize a small 2D image
    // (values represent pixel intensity)
    // ----------------------------------------------
    //
    //
    // int image[ROWS][COLS] = {
    //     { ?, ?, ?, ?, ? },
    //     { ?, ?, ?, ?, ? },
    //     { ?, ?, ?, ?, ? },
    //     { ?, ?, ?, ?, ? },
    //     { ?, ?, ?, ?, ? }
    // };
    //

    // ----------------------------------------------
    // Display the original image
    // ----------------------------------------------
    // Call printImage

    // ----------------------------------------------
    // Modify the image
    // ----------------------------------------------
    // Call invertImage OR drawBox (or both)

    // ----------------------------------------------
    // Display the modified image
    // ----------------------------------------------
    // Call printImage again

    // ----------------------------------------------
    // Call drawX 
    // ----------------------------------------------
    // Call printImage again

    return 0;
}

// ==================================================
// FUNCTION DEFINITIONS (PSEUDOCODE ONLY)
// ==================================================

void printImage(int img[][COLS], int rows) {
    // ----------------------------------------------
    // For each row:
    //     For each column:
    //         Print the value at img[row][col]
    //     Move to the next line
    //
    // Use nested loops
    // ----------------------------------------------
}

void invertImage(int img[][COLS], int rows) {
    // ----------------------------------------------
    // For each row:
    //     For each column:
    //         Replace the value with (9 - current value)
    //
    // This modifies the ORIGINAL image because
    // arrays are not copied when passed to functions
    // ----------------------------------------------
}

void drawBox(int img[][COLS], int rows) {
    // ----------------------------------------------
    // Draw a border (box) around the image:
    //
    // For the first and last row:
    //     Set all columns to a fixed value (e.g., 9)
    //
    // For the remaining rows:
    //     Set the first and last column to the value
    //
    // Leave interior pixels unchanged
    // ----------------------------------------------
}



void drawX(int img[][COLS], int rows) {
    // ----------------------------------------------
    // Draw an X across the image:
    //
    // For each row:
    //     Set img[row][row] to a value
    //     Set img[row][COLS - 1 - row] to a value
    //
    // Assumes ROWS == COLS
    // ----------------------------------------------
}

