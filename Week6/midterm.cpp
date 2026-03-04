#include <iostream>
using namespace std;

class Dice{
    private:
        int face; 
    public:
        Dice(int s = 1) : face(s) {}; 
        int roll() {
            return (rand() % face) + 1;
        }
        int get_face(){
            return face;
        }
}; 

class Game{
    private:
        Dice die1; 
        Dice die2;
        Dice dices[5]; // default constructor will be called for 
                       // each Dice object in the array
                       // whenever you create a new Game object, 
    public:
        Game() : die1(6), die2(6) {};   
        void play() {
            int roll1 = die1.roll();
            int roll2 = die2.roll();
            cout << "You rolled: " << roll1 << " and " << roll2 << endl;
        }
};

int main(){
    Game game; // 
}