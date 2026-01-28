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
    srand(time(0));   // seed random number generator

    // --------------------------------------------------
    // 2. Declare variables
    //    - two dice values (int)
    //    - sum of the dice (int)
    //    - point value (int)
    //    - boolean to control the game loop (done = bool)
    // --------------------------------------------------
    int die1, 
        die2,
        sum,
        point;
    bool done = false; 

    char start_end;
    cout << "Welcome to my dice game! " << endl;

    cout << "Press S to start or X to end" << endl;
    cin >> start_end;
    while (start_end != 'S' and start_end != 'X'){
        cout << "Press S to start or X to end" << endl;
        cin >> start_end;
    }

    while (start_end == 'S'){ // play one game
        cout << "Let's roll two dice" << endl;
        // --------------------------------------------------
        // 3. Roll the dice for the first time
        //    - generate two random numbers from 1 to 6
        //    - add them to get the sum
        //    - display the rolls and sum
        // --------------------------------------------------
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum  = die1 + die2;
        cout << "Sum = " << sum << " Roll 1 = " << die1 << " Roll 2 = " << die2 << endl;

        // --------------------------------------------------
        // 4. Check the result of the first roll
        //    - if sum is 7 or 11 → player wins
        //    - if sum is 2, 3, or 12 → player loses
        //    - otherwise:
        //        * set the point to the sum
        //        * continue the game
        // --------------------------------------------------
        if (sum == 7 || sum == 11){
            cout << "You win!" << endl;
            done = true;
        }
        else if (sum == 2 || sum == 3 || sum == 12){
            cout << "You loose!" << endl;
            done = true;
        }
        else{
            point = sum;
        }
        cout << " Game over " << done << endl; 

        // --------------------------------------------------
        // 5. While the game is not over
        //    - roll the two dice again
        //    - display the roll and sum
        //
        //    - if sum equals the point → player wins
        //    - else if sum equals 7 → player loses
        //    - else → keep rolling
        // --------------------------------------------------
        while (!done){

            cout << "Press any key to continue" << endl;
            string cont;
            getline(cin,cont); // reads a string from the keyboard until user pressed new line

            die1 = rand() % 6 + 1;
            die2 = rand() % 6 + 1;
            sum = die1 + die2;

            cout << "You rolled " << die1 << " and " << die2 << ". Sum is " << sum << endl;
            
            if (sum == point){
                cout << "You win! " << endl;
                done = true;
            }
            else if (sum == 7){
                cout << "You lose!" << endl;
                done = true;
            }
        }
        // read from the user a value for start_end
        cout << "Press S to start or X to end" << endl;
        cin >> start_end;
        while (start_end != 'S' and start_end != 'X'){
            cout << "Press S to start or X to end" << endl;
            cin >> start_end;
        }

    } // end while (start_end == 'S')
    cout << "Thank you for playing my game " << endl;
    // --------------------------------------------------
    // 6. End the program
    // --------------------------------------------------

    return 0;
}