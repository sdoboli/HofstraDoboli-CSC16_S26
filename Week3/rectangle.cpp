#include <iostream>
using namespace std;

class Rectangle {
  public:
    Rectangle() {  // default constructor
        width = 0;
        height = 0;
    }

    Rectangle(int w, int h) { // specific constructor
        width = w;
        height = h;
    }

    int getWidth() const { // accessor function
        return width;
    }

    int getHeight() const { // accessor function
        return height;
    }

    void setWidth(int w) { // mutator function
        width = w;
    }

    void setHeight(int h) { // mutator function
        height = h;
    }

    int area() const { // accessor function that calculates area
        return width * height;
    }

  private:
    int width;
    int height;
};

int main() {
    Rectangle r1;          // default constructor
    Rectangle r2(3, 4);    // specific constructor

    cout << "r1 area: " << r1.area() << endl;
    cout << "r2 area: " << r2.area() << endl;

    r1.setWidth(5);
    r1.setHeight(2);

    cout << "r1 new area: " << r1.area() << endl;

    return 0;
}

/*
Review of classes and objects:
1. A class is a blueprint for creating objects. It defines the data members 
    (attributes) and member functions (methods) that operate on the data.
2. An object is an instance of a class. It has its own state (values of data members) 
    and can use the member functions defined in the class.
3. A constructor is a special member function that is called automatically 
when an object is instantiated. It is used to initialize the data members of 
the object. 
4. A default constructor takes no parameters, while a specific constructor takes 
parameters to initialize the object with specific values.
4. Accessor functions (getters) are member functions that typically return the value of a 
data member. Accessor functions cannot modify the data members of an object when declared 
with const
    The area() function is an example of an accessor function 
    that calculates and returns the area of the rectangle based on its width and height.
5. Mutator functions (setters) are member functions that modify the value of a data member.
6. The private specifier restricts access to the data members to only the member functions of the class, 
ensuring that they can only be accessed and modified through the public member functions,
which helps to maintain encapsulation and data integrity.
7. The public specifier allows access to the member functions from outside the class, 
enabling interaction with the object's data in a controlled manner.
*/