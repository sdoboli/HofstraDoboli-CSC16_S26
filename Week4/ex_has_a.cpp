#include <iostream>
using namespace std;

class Engine {
public:
    Engine(int hp) {
        cout << "Engine constructor\n";
    }
};

class Car {
private:
    Engine engine;

public:
    Car(int hp) : engine(hp) {
        cout << "Car constructor\n";
    }
};

int main() {
    Car myCar(200);
    return 0;
}