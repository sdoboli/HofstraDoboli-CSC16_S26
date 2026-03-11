// THIS IS THE HEADER FILE 
// Contains all function declarations
#include <string>
using namespace std;

#ifndef RECURSION
#define RECURSION

int int2bit(int);
bool is_palindrome(string str);
string to_lower(string str);
string replace(string str, char old, char repl);
string strip(string str, string replace = " ");
bool is_sorted(int array[], int size, string type = "up");
void display_array(int array[], int);
int max_special(int array[], int, int, int);
void permutations(string s, int);
double pow_n(double, int);

#endif
