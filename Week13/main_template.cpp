#include <iostream>
#include <string>
#include "template_list.cpp"
using namespace std;

int main() {
    SimpleList<int> intList;
    intList.push_back(10);
    intList.push_back(20);
    intList.push_back(30);

    intList.print();  // 10 20 30

    SimpleList<string> strList;
    strList.push_back("hello");
    strList.push_back("world");

    strList.print();  // hello world
}