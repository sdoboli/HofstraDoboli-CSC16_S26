#include <iostream>
using namespace std;

class Engine {
    private: 
       int horsepower;
    public:
      Engine(int hp) : horsepower(hp) {
        cout << "Engine constructor\n";
    }
};

class Car {
  private:
    Engine engine; // you only have access to the public members of Engine class, 
  public:
    Car(int hp) : engine(hp) {
        cout << "Car constructor\n";
    }
};

int main() {
    Car myCar(200);
    return 0;
}