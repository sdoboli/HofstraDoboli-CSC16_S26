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
    showRules();
    // While the user wants to play, play the game
    while(wantToPlay()){
        playGame();
    }
    // Display a goodbye message
    cout << "Thank you for playing my game!" << endl;
    return 0;
}


// ==================================================
// FUNCTION DEFINITIONS (PSEUDOCODE ONLY)
// ==================================================

void showRules(){
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
    cout << "Welcome to my dice game! " << endl;
    cout << "Here are the rules of the game: " << endl;
    cout << "- Roll two dice" << endl;
    cout << "- If the sum is 7 or 11, you win" << endl;
    cout << "- If the sum is 2, 3, or 12, you lose" << endl;
    cout << "- Otherwise, the sum becomes your point" << endl;
    cout << "- Keep rolling until:" << endl;
    cout << "    * You roll your point again (you win)" << endl;
    cout << "    * You roll a 7 (you lose)" << endl;
}

bool wantToPlay() {
    // ----------------------------------------------
    // Ask the user:
    cout <<  "Press S to start the game or X to exit." << endl;
    //
    char choice;
    // Read a character from the user
    cin >> choice;
    // while the character is different than 'S' or 'X'
          // Ask the user:
         // "Press S to start the game or X to exit."
        // Read a character from the user
    while (choice != 'S' && choice != 'X'){
        cout <<  "Press S to start the game or X to exit." << endl;
        cin >> choice;
    }
    // if character is 'S':
    //     return true
    // else:
    //     return false
    if (choice == 'S'){
        return true;
    }
    else{
        return false;
    }
    // ----------------------------------------------
}

int rollDie() {
    // ----------------------------------------------
    // Generate a random number between 1 and 6
    // Return the number
    // ----------------------------------------------
    return rand() % 6 + 1;
}

int rollTwoDice() {
    // ----------------------------------------------
    // Declare two integers for the dice
    int die1, die2;
    // Call rollDie() for die #1
    die1 = rollDie();
    // Call rollDie() for die #2
    die2 = rollDie();
    // Display the value of each die
    cout << "Roll 1 = " << die1 << " Roll 2 = " << die2 << endl;
    // Return the sum of the two dice
    // ----------------------------------------------
    return die1 + die2;
}

void playGame() {
    // ----------------------------------------------
    // Declare variables:
    // - sum of dice
    // - point
    // - boolean gameOver
    int sum,
        point;
    bool gameOver = false;
    // Ask user to enter any key to roll the dice
    cout << "Press enter to roll the dice." << endl;
    string cont;
    getline(cin, cont);
    // Roll two dice (first roll)
    sum = rollTwoDice();
    // Display the sum
    cout << "Sum = " << sum << endl;
    // If sum is 7 or 11:
    //     Display win message
    //     End the game
    //
    if (sum == 7 || sum == 11){
        cout << "You win!" << endl;
        gameOver = true;
    }
    else if (sum == 2 || sum == 3 || sum == 12){
        cout << "You lose!" << endl;
        gameOver = true;
    }
    else{
        point = sum;
        cout << "Your point is: " << point << endl;
    }
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
