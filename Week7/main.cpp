// This file has the main function and it
// tests all function in functions.cpp
#include <string>
#include <cstdlib>
#include <cctype>    
#include <iostream>
using namespace std;
#include "header.h"

int main()
{

    cout << "TEST: intbit(int)" << endl;
    int values[] = {7, 8, 10, 23, 157};
    int results_int2bit[] = {3,4,4,5,8};
    int count_correct = 0;
    for (int i = 0; i < 5; i++){
        int bits = int2bit(values[i]);
        cout << values[i] << endl; 
        cout << "\tCorrect " << results_int2bit[i] << ' ';
	    cout << "\tYour result " << bits << endl;
        if (bits == results_int2bit[i])
            count_correct++;
    }
   cout << "You got " << count_correct << " out of 5 tests" << endl;

   cout << "\nTEST: palindrome(str)" << endl;
   string test[] = {"noon", "reviver", "", "a", "ab", "abc"};
   bool results[] = {true, true, true, true, false, false};
   const int SIZE_TEST = 6;
   for (int i = 0; i < SIZE_TEST; i++)
   {
       if (is_palindrome(test[i]) == results[i])
            cout << "Correct ";
        else
            cout << "Incorrect ";
        cout << test[i] << endl;
   }
	
   cout << "\nTEST 1: to_lower(str)" << endl;
   string inputs1[] = {"LAB 5: Recursion", "John J. Doe", "", "123.45"};
   string outputs1[]= {"lab 5: recursion", "john j. doe", "", "123.45"};
   int correct = 0;
   for (int i = 0; i < 4; i++)
    {
        if (to_lower(inputs1[i]) == outputs1[i])
            correct++;
        else
        { 
            cout << "\tInput: " << inputs1[i] <<  endl;
            cout << "\tYour Output:" << to_lower(inputs1[i]); 
            cout << "\tCorrect Output:" << outputs1[i] << endl; 
        }
    }
    cout << "Passes " << correct << " out of 4 test cases" << endl;

    cout << "\nTEST 2: replace(string, char, char )" << endl;
    string inputs2[] = {"LAB 5: Recursion", "John J. Doe", "", "123.43"};
    char orig[] = {' ','o','c','3'};
    char repl[] = {'_','u','x','0'};
    string outputs2[]= {"LAB_5:_Recursion", "Juhn J. Due", "", "120.40"};
    correct = 0;
    for (int i = 0; i < 4; i++)
    {
        if (replace(inputs2[i], orig[i], repl[i]) == outputs2[i])
            correct++;
        else
        { 
            cout << "\tInputs: " << inputs2[i] <<" replace \"" << orig[i] << "\"" 
            << " with  \"" << repl[i] << "\"" << endl;
            cout << "\tYour Output:" << replace(inputs2[i], orig[i], repl[i]); 
            cout << "\tCorrect Output:" << outputs2[i] << endl; 
        }
    }
    cout << "Passes " << correct << " out of 4 test cases" << endl;

    cout << "\nTEST 3: strip(string, string)" << endl;
    string inputs3[] = { "_@task1!?", "%53.57", "It's a #beautiful day!" ,""};
    string remove[]    = {  "",          ".",       " '",                   " "};
    string outputs3[]= {"task1",      "53.57",   "It's a beautiful day",  ""};
    correct = 0;
    for (int i = 0; i < 4; i++)
    {
        if (strip(inputs3[i], remove[i]) == outputs3[i])
            correct++;
        else
        { 
            cout << "\tInputs: " << inputs3[i] <<" , \"" << remove[i] << "\"" << endl;
            cout << "\tYour Output:" << strip(inputs3[i], remove[i]); 
            cout << "\tCorrect Output:" << outputs3[i] << endl; 
        }
    }
    cout << "Passes " << correct << " out of 4 test cases" << endl;

    cout << "\nTEST 4:  is_sorted(int [], int, string)" << endl;
    int arrays[][5] ={{0,1,2,3,4}, {4,3,2,1,0}, {1,1,1,1,1},
                     {2,2,2,2,2}, {10,5,3,20,50}, {10,5,3,20,50}};
    string type[] = {"up", "down","up","down","up","down"};
    bool outputs4[] = {true, true, true, true, false, false};
    correct = 0;

    for (int i = 0; i < 6; i++)
    {
        if (is_sorted(arrays[i], 5, type[i]) == outputs4[i])
            correct++;
        else
        { 
            cout << "\tInputs: ";
            display_array(arrays[i],5);
            cout << " " << type[i] << endl;
            cout << "\tYour Output:" << is_sorted(arrays[i], 5, type[i]); 
            cout << "\tCorrect Output:" << outputs4[i] << endl; 
        }
    }
    cout << "Passes " << correct << " out of 6 test cases" << endl;

    cout << "\nOPTIONAL TEST 5: max_special(int [], int)" << endl;
    int array5[] = {3,4,5,6,0,1,2}; // {6, 0, 1, 2, 3, 4, 5};// {0,1,2,3,4,5,6};
    int output6 = 6; 
    cout << "\tInput array = ";
    display_array(array5, 7);
    cout << "\tYour output: " << max_special(array5,7, 0, 6);
    cout << "\tCorrect output: is " << output6 << endl;

    cout << "\nOPTIONAL TEST 6: permutations(string)" << endl;
    cout << "\tInput is \"abc\" \n";
    cout << "\tYour output is: \n"; 
    permutations("abc", 0); 
   
    cout << "\nOPTIONAL TEST 7: pow_n(double, int) " << endl;
    cout << "\tInput is x = 2.0, n = 10 " << endl;
    cout << "\tYour output is: "<< pow_n(2.0, 10) << endl;
    cout << "\tInput is x = 2.0, n = -10 " << endl;
    cout << "\tYour output is: "<< pow_n(2.0, -10) << endl;
   

}
