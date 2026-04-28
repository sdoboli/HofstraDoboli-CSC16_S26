#include <iostream>
#include <string>
using namespace std;

template<class T> // class or typename can be used to declare a template type parameter
void init_array(T *ptr, int size, T val);
template<class T>
void display(T *ptr, int size);

int main()
{
    double array_static[10];
    int *ptr_dynamic_array = new int[10];

    init_array(array_static, 10, 1.5);
    init_array(ptr_dynamic_array, 10, 0);

    cout << "Static array: ";
    display(array_static, 10);

    cout << "\nDynamic array: ";
    display(ptr_dynamic_array, 10);

}

template<class T>   // class or typename
void init_array(T *ptr, int size, T val)
{
    for (int i = 0; i < size; i++)
        ptr[i] = val;
}

template<typename T>
void display(T *ptr, int size)
{
     for (int i = 0; i < size; i++)
        cout << ptr[i] << ' ';
    cout << endl;
}