#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()

using namespace std;

// ==================================================
// FUNCTION PROTOTYPES
// ==================================================

// Display a welcome message and/or rules of Craps
void showRules();

// Ask the user if they want to start a new game
// Return true if the user wants to play, false otherwise
bool wantToPlay();

// Roll one die and return a value from 1 to 6
int rollDie();

// Roll two dice, display the results, and return the sum
int rollTwoDice();

// Play one complete game of Craps
void playGame();


// ==================================================
// MAIN FUNCTION
// ==================================================
int main() {

    // ----------------------------------------------
    // PSEUDOCODE FOR main
    // ----------------------------------------------

    // Seed the random number generator using time

    // Display a welcome message
    // Call showRules()

    // While the user wants to play:
    //    Call wantToPlay()
    //    If user chooses yes:
    //        Call playGame()
    //    Else:
    //        Exit the loop

    // Display a goodbye message

    return 0;
}


// ==================================================
// FUNCTION DEFINITIONS (PSEUDOCODE ONLY)
// ==================================================

void showRules() {
    // ----------------------------------------------
    // Display the rules of the Craps game:
    // - Roll two dice
    // - If the sum is 7 or 11, the player wins
    // - If the sum is 2, 3, or 12, the player loses
    // - Otherwise, the sum becomes the point
    // - Keep rolling until:
    //     * The point is rolled again (win)
    //     * A 7 is rolled (lose)
    // ----------------------------------------------
}

bool wantToPlay() {
    // ----------------------------------------------
    // Ask the user:
    // "Press S to start the game or X to exit."
    //
    // Read a character from the user
    //
    // while the character is different than 'S' or 'X'
          // Ask the user:
         // "Press S to start the game or X to exit."
        // Read a character from the user

    // if character is 'S':
    //     return true
    // else:
    //     return false
    // ----------------------------------------------
}

int rollDie() {
    // ----------------------------------------------
    // Generate a random number between 1 and 6
    // Return the number
    // ----------------------------------------------
}

int rollTwoDice() {
    // ----------------------------------------------
    // Declare two integers for the dice
    //
    // Call rollDie() for die #1
    // Call rollDie() for die #2
    //
    // Display the value of each die
    //
    // Return the sum of the two dice
    // ----------------------------------------------
}

void playGame() {
    // ----------------------------------------------
    // Declare variables:
    // - sum of dice
    // - point
    // - boolean gameOver
    //
    // Ask user to enter any key to roll the dice
    // Roll two dice (first roll)
    // Display the sum
    //
    // If sum is 7 or 11:
    //     Display win message
    //     End the game
    //
    // Else if sum is 2, 3, or 12:
    //     Display lose message
    //     End the game
    //
    // Else:
    //     Set point equal to sum
    //     Display the point
    //
    // While the game is not over:
    //     Ask user to enter any key to roll the dice
    //     Roll two dice
    //     Display the sum
    //
    //     If sum equals point:
    //         Display win message
    //         End the game
    //
    //     Else if sum equals 7:
    //         Display lose message
    //         End the game
    //
    //     Else:
    //         Continue rolling
    // ----------------------------------------------
}
