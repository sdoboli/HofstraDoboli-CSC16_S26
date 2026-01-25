/*
The game of craps is perhaps the most famous of all dice games. The player begin by 
throwing two standard dice. If the sum of these dice is 7 or 11, the player wins. 
If the sum is 2,3 or 12, the player loses. Otherwise, the sum becomes the player’s point. 
The player continues to roll until either the point comes up again, in which case the 
player wins, or the player throws 7, in which case they lose. 

Write a program that implements the dice game. 

The program's specifications are in the pptx (on Canvas). Please follow them. 

The template below plays only one game. You will need to add code to play multiple games
*/

#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {

    // --------------------------------------------------
    // 1. Seed the random number generator
    //    (use current time so rolls are different each run)
    // --------------------------------------------------


    // --------------------------------------------------
    // 2. Declare variables
    //    - two dice values
    //    - sum of the dice
    //    - point value
    //    - boolean to control the game loop
    // --------------------------------------------------


    // --------------------------------------------------
    // 3. Roll the dice for the first time
    //    - generate two random numbers from 1 to 6
    //    - add them to get the sum
    //    - display the roll and sum
    // --------------------------------------------------


    // --------------------------------------------------
    // 4. Check the result of the first roll
    //    - if sum is 7 or 11 → player wins
    //    - if sum is 2, 3, or 12 → player loses
    //    - otherwise:
    //        * set the point to the sum
    //        * continue the game
    // --------------------------------------------------


    // --------------------------------------------------
    // 5. While the game is not over
    //    - roll the two dice again
    //    - display the roll and sum
    //
    //    - if sum equals the point → player wins
    //    - else if sum equals 7 → player loses
    //    - else → keep rolling
    // --------------------------------------------------


    // --------------------------------------------------
    // 6. End the program
    // --------------------------------------------------

    return 0;
}