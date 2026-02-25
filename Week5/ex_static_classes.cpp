#include <iostream>
using namespace std;

class Student {
private:
    static int totalStudents;

public:
    Student() {
        totalStudents++;
    }
    static int getTotalStudents() {
        return totalStudents;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    cout << Student::getTotalStudents() << endl;
    return 0;
}

/*
  Review Questions:
1. What is a static member variable in a class and how does it differ from a regular 
member variable?
   - A static member variable is shared among all instances of a class, meaning 
   that there is only one copy of the variable for the entire class. In contrast, 
   a regular member variable is unique to each instance of the class, and each 
   object has its own copy of that variable.
2. What is a static function member in a class and how does it differ from a regular member function?
   - A static member function is a function that belongs to the class rather than 
   any particular object. It can be called using the class name without creating an 
   instance of the class. In contrast, a regular member function operates on an 
   instance of the class and can access non-static member variables and functions.
3. Can a static member function access non-static member variables? Why or why not?
   - No, a static member function cannot access non-static member variables because
   it does not have a 'this' pointer, which is used to refer to the instance-specific data. Static member functions can only access static member variables and other static member functions.

4.  How do you declare and define a static member variable in a class?
   - A static member variable is declared inside the class definition using 
   the 'static' keyword, e.g., 'static int count;'. It must be initialized outside 
   the class definition, typically in a source file, using the syntax 
   'int ClassName::count = initialValue;'.
5. How do you access a static member variable and a static member function?
   - A static member variable can be accessed using the class name 
   followed by the scope resolution operator, e.g., 'ClassName::count'. 
   - A static member function can also be accessed in the same way, e.g., 
   'ClassName::getCount();'. Static members can also be accessed 
   through an object of the class, but it is more common to access 
   them using the class name since they are shared across all instances.
6. What are some common use cases for static member variables and functions in C++?
   - Static member variables are often used to keep track of information that 
   is common to all instances of a class, such as counting the number of 
   objects created. 
   - Static member functions are used for operations that 
   do not require access to instance-specific data, such as utility 
   functions. They can also be used to access and modify static member variables.
*/