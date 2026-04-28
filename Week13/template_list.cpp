#include <iostream>
using namespace std;

template <typename T>
class SimpleList {
private:
    T* data;
    int capacity;
    int size;

public:
    // Constructor
    SimpleList(int cap = 10) {
        capacity = cap;
        size = 0;
        data = new T[capacity];
    }

    // Destructor
    ~SimpleList() {
        delete[] data;
    }

    // Add element
    void push_back(T value) {
        if (size == capacity) {
            // resize (double capacity)
            capacity *= 2;
            T* newData = new T[capacity];

            for (int i = 0; i < size; i++)
                newData[i] = data[i];

            delete[] data;
            data = newData;
        }
        data[size++] = value;
    }

    // Access element
    T get(int index) const {
        return data[index]; // no bounds checking for simplicity
    }

    // Get current size
    int getSize() const {
        return size;
    }

    // Print list
    void print() const {
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};