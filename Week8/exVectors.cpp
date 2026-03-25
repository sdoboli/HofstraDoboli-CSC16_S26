#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Declare an empty vector
    vector<int> v;

    // 6. Check size and capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // 2. Add elements dynamically
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Now: v = {10, 20, 30}
     // 6. Check size and capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // 3. Access elements
    cout << "First element: " << v[0] << endl;     // fast, no bounds check
    cout << "Second element: " << v.at(1) << endl; // safe access

    // 4. Modify elements
    v[1] = 99;  // change 20 → 99

    // Now: v = {10, 99, 30}
    // 5. Print vector using loop
    cout << "Vector contents: \n";
    for (int i = 0; i < v.size(); i++) {
        cout << "Value: " << v[i] << " Address: " << &v[i] << endl;
    }
    cout << endl;

    // 6. Check size and capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // 7. Remove last element
    v.pop_back();
        // 6. Check size and capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    // Now: v = {10, 99}

    // 8. Range-based loop (cleaner)
    cout << "After pop_back: ";
    for (int x : v) { // range based for loop: for each item x in vector v
        cout << x << " "; // cannot change the item value 
    }
    cout << endl;

    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout << "After pushing back 3 more items" << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Vector contents: \n";
    for (int i = 0; i < v.size(); i++) {
        cout << "Value: " << v[i] << " Address: " << &v[i] << endl;
    }
    cout << endl;
    cout << "What happened to the addresses of the vector items? " << endl;
    
    cout << "Example array " << endl;
    cout << "Check the memory addresses" << endl;
    int array[4] = {1,2,3,4};
    for (int i = 0; i < 4; i++){
        cout << array[i] << ' ' << &array[i] << endl;
    }
    return 0;
}