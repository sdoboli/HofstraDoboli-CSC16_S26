// THIS IS THE FUNCTION IMPLEMENTATION FILE
// Contains all function definitions
#include <string>
#include <cstdlib>
#include <cctype>    
#include <iostream>
using namespace std;
#include "header.h"

/*
    int int2bit(int n)
    Goal: Write a recursive function that returns the 
    number of bits needed to represent an integer in binary.
    Input: an integer
    Output: the number of bits needed to represent the integer in binary
    Example: int2bit(7) = 3 bits (111)
             int2bit(0) = 1 bit (0), int2bit(1) = 1 bit (1)
             int2bit(15) = 4 bits (1111)

             Original problem: 
             Solution(NUM_BITS(n))  = Solution (F'(n' < n)) + additional steps
             F' = NUM_BITS([n/2])
             Additional step = add 1 bit to Solution(F')


    Processing: // ADD YOUR STEPS HERE
        
        Base case: n < 2 (either 0 or 1) solution is 1 bit
        Recursive case:

    Preconditions: None
    Postconditions: None
*/
int int2bit(int n)
{
    cout << "BEGIN int2bit(" << n << ")" << endl;
    if (n < 2)
       return 1; // 0 or 1 is represented with 1 bit
     else
	{
       int k_bits = int2bit(n/2); // F' problem
       k_bits =  k_bits + 1; // additional step
       cout << "END int2bit(" << n << ") = " << k_bits << endl;
       return k_bits;
	}
}

/*
    bool is_palindrome(string str)
    Goal: Write a recursive function that checks if a string is a palindrome or not. 
    A palindrome is a string that reads the same forwards and backwards. 
    The function returns true if the string is a palindrome, false otherwise.

    Use cases: 
        is_palindrome("noon")      --> true
        is_palindrome("reviver")   --> true
        is_palindrome("")          --> true
        is_palindrome("a")         --> true
        is_palindrome("ab")        --> false
        is_palindrome("abc")       --> false


    Input: a string
    Output: bool - true if the string is a palindrome, false otherwise
    Processing: // ADD YOUR STEPS HERE
        
        Base case:  if string is empty or has one character,
                    it is a palindrome, return true
        Recursive case:
        IS_Palindrome (F) = If IS_PALINDROME(F') and  
                            additional steps
        Additional steps: 
            check if first and last characters of F are equal
            if they are not -> not a palindrome
        F' = the string in between the first and last
            characters of F
    Preconditions: None
    Postconditions: None
*/
bool is_palindrome(string str) // objects are passed by value
{
    if (str.length() <= 1) // base case
        return true; // empty string or one character is a palindrome
    // additional step
    if (str.at(0) != str.at(str.length()-1))
        return false;
    else{
        // new_str is F' problem
        string new_str = str.substr(1, str.length()-2); // F' problem
        return is_palindrome(new_str); 
    }
}

/*
    string to_lower(string s);
    Goal: Write a recursive function that converts a string into lower case letters. 
    The function returns the new string.

	Use cases: 
		to_lower("Today")      --> today
	
    You can use the tolower() function  
    in the standard library to convert one 
    character to upper case letter. 
    Look for its usage in the C++ reference 
    page on-line:  int tolower ( int c );    
    input is a character, output is the lower case letter if input 
    is a lower case letter.
    Input: a string with any characters
    Output: a string with all upper case letters converted into lower
            case letters
    Processing: // ADD YOUR STEPS HERE
        
        Base case:
        Recursive case:

    Preconditions: None
    Postconditions: None
*/
string to_lower(string str)
{
    if (str.length() == 0)
        return str; // base case
    
    string remaining_str = str.substr(1); // F' problem
    // str.substr(1) returns a substring starting 
    // from index 1 to the end of the string
    string sol_f1 = to_lower(remaining_str); // recursive call
    string sol_f = (char)tolower(str.at(0)) + sol_f1; // additional step
    // Additional step = tolower(str.at(0)) converts the first character 
    // of str to lower case
    return sol_f;
}
/*
    string replace(string s, char orig, char repl)
    Goal: 
    Write a recursive function to replace a character in a string with 
    another character. 
    DO NOT USE the replace() function in the string class - you will 
    receive no credit. Return the new string.

	Use case:  input: a string = "afternoon showers and thunderstorms"
			   replace 'o' with 'm'
			   output: return a string "afternmmn shmers and thunderstmrms" 
	Inputs: str = the string, orig = the character you want to replace in str
            repl = the character you want to replace old with 
    Output: a string with all occurences of orig replaced with repl

    Processing: // ADD YOUR STEPS HERE

	    Base case:
		
	    Recursive case:	
    
    Preconditions: None
    Postconditins: None

*/
string replace(string str, char orig, char repl)
{

}

/*
    string strip(string str, string not_remove = " ")
    Goal: Write a recursive function that removes from a string all 
    non-letters and non-digits characters except for the characters in not_remove. If not_remove string
    is not specified, then all non-letters and non-digits characters except for spaces are removed. 

    Use-cases: 
        Input: str = "@task!", not_remove = "",  Output: "task"
        Input: str = "%53.57", not_remove = "."  Output: "53.57"
        Input: str = "It's a #beautiful day!", not_remove = " '"-> 
               Output: "It's a beautiful day"
	       
    Input:  str = the original string, 
            not_remove = non-alpha characters you don't want to remove from str
                   = default value for not_remove is the space = " "
    Output: the string str stripped of all non-letter and non-digits characters except for 
            the characters in the string not_remove.
    Processing: // ADD YOUR STEPS HERE

        // You can use the function find in the string class to check if a character
        // is in the string not_remove or not
        // If the function returns -1 it means the character was not found in the string
        // Check its usage: http://www.cplusplus.com/reference/string/string/find/
        size_t find(char c, size_t pos = 0) 

        // You can use the function isalnum() in the standard library to check
        // if a character is a letter - either upper or lower case or a digit
        // Check its usage at http://www.cplusplus.com/reference/cctype/isalnum/

        Base case:

        Recursive case:
            if first_char is a letter or a digit leave it there
            else
                if it is inside not_remove - leave it there
                else
                    remove it 

    Preconditions: None
    Postconditions: None

*/ 
string strip(string str, string not_remove)
{

}

/*
    bool is_sorted(int array[], int size, string type = "up")
    Goal: Write a recursive function that checks if an array is sorted or not
    Inputs: array, size and a string type. 
            If type is equal to "up",  it checks if the array is sorted in increasing 
            order. 
            If type is equal to "down", it checks if the array is sorted in decreasing 
            order. 
            The default value for type is "up"
    Output: bool - true if the array is sorted in increasing order if type = "up", 
            or in decreasing order if type = "down", false otherwise
    Processing: // ADD YOUR STEPS HERE
        
        Base case:

        Recursive case:

    Preconditions: None
    Postconditions: None
*/
bool is_sorted(int array[], int size, string type)
{

}


void display_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
       cout << array[i] << ' ';
}

/*
    Extra credit problems
    Write a recursive function that finds the maximum element from an array
    that is sorted, but rotated around an unknown element called pivot.

    For example the array can be: [4 5 6  0 1 2 3]. It is sorted, but rotated. 
    The maximum is 6. 
    
    Your algorithm must not look through all elements in the array. You should
    use an algorithm similar to binary search, but adapted to finding the maximum
    
     Processing: // ADD YOUR STEPS HERE
        
        Base case:

        Recursive case:
*/

int max_special(int array[], int size, int right_index, int left_index)
{
    // ADD YOUR CODE HERE
    
    if (size == 1)
        return array[0];
    if (left_index < right_index)
        return -1; // no max
    
    int middle = (left_index + right_index)/2;
    int before = (size + middle -1) % size;
    int after  = (size + middle +1) % size;

    if (array[middle] >= array[before] && array[middle] > array[after])
        return array[middle];
    
    if (array[middle] < array[before] && array[middle] <= array[after])
        return array[before];
    
    int return_first_half = max_special(array, size, right_index, middle-1);
    if (return_first_half == -1)
        return max_special(array, size, middle+1, left_index);
    else
        return return_first_half;
     
}


/*
    Write a recursive function that displays all permutations of a string:
    If the string is abc: the function will display:
        abc
        acb
        bac
        bca
        cab
        cba
	
    Processing: // ADD YOUR STEPS HERE
        
        Base case:

       	Recursive case:
	
*/

void permutations(string s, int start_ind)
{
    cout << "Permutations of " << s << endl;
    // ADD YOUR CODE HERE
    // THIS FUNCTION DOES DISPLAYS ALL PERMUTATIONS
}

/*
  int pow_n(double x, int n)
  
  Write a recursive function that computes efficiently x to the power n. 
  Use the fact that once you computed x^k, you can get x^2k by multiplying x^k * x^k, which
  reduces the number of multiplications a lot. 
  
   Processing: // ADD YOUR STEPS HERE
        
        Base case:

        Recursive case:
  
 */
double pow_n(double x, int n)
{
  // ADD YOUR CODE HERE 
  // THIS FUNCTION DOES NOT DISPLAY ANYTHING
  return 0;
}
