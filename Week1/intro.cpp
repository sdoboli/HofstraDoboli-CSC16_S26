#include <iostream>  // library of input and output functions
#include <cstdlib>   // rand, srand 
#include <ctime>     // time

using namespace std;

int main() {

    // ==============================================
    // RANDOM NUMBERS (similar to Python's random)
    // ==============================================

    // In Python:
    // random.seed()
    // random.randint(1, 10)

    // In C++:
    srand(time(0));   // seed random number generator

    // int randomNum = rand() % 10 + 1;   // TODO: uncomment and use
    int randomNum =  rand() % 6 + 1; ; //declare all variables before you use them
   // generates a random number between 1 and 6
    cout << "Random number between 1 and 6: " << randomNum << endl;
    // ==============================================
    // PRIMITIVE DATA TYPES
    // ==============================================

    // Python:
    // x = 5
    // y = 3.14
    // name = "Alice"
    // isDone = False

    // C++ (types must be declared):
    int x = 5;  // short int 
    double y = 3.14; // float 
    char letter = 'A'; // store one character (string in c++ is a class)
    bool isDone = false;

    // cout << x << " " << y << endl;   // output

    // logical operators: && (and), || (or), ! (not)

    // ==============================================
    // IF STATEMENTS
    // ==============================================

    // Python:
    // if x > 0:
    //     print("Positive")
    // elif x == 0:
    //     print("Zero")
    // else:
    //     print("Negative")

    // C++
    if (x > 0){
        cout << "Positive" << endl;
    }
    else if (x == 0) {
        cout << "Zero" << endl;

    }
    else {
        cout << "Negative" << endl;
    } 


    // ==============================================
    // WHILE LOOP
    // ==============================================

    // Python:
    // count = 0
    // while count < 5:
    //     print(count)
    //     count += 1

    int count = 0;
    while (count < 5) {
        cout << count << endl;
        count++;   // increment count by 1 (c) or count-- (decrement by 1)
    }


    // ==============================================
    // FOR LOOP
    // ==============================================

    // Python:
    // for i in range(5):
    //     print(i)

    // C++:
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    // ==============================================
    // COMMON PYTHON → C++ NOTES
    // ==============================================

    // - Indentation does NOT control blocks → { } do
    // - Variables must have a type
    // - Statements end with semicolons ;
    // - true / false are lowercase
    // - Use cout instead of print()
    return 0;
}
