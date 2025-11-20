/**
 * So hello everyone today i will tell you about memory addresses
 * You know that in Python, C#, Java etc. we dont' usually work on memory addresses
 * like you didn't came across & symbol  there, that is due to there aer 4th gen High level languages
 * which automatically do memory allocation, garbage collection etc. for you.
 * 
 * hence user don't require to automatically free mmemory from ram or heap.
 * 
 * but as C++ was made as an extension of C, (backward compatibility) hence they need to 
 * manually allocate, deallocate memory
 * 
 * therefore due to this behaviour we use C++ for embedded system 
 * to manually squeeze the last bit of efficiency
 * X----X
 * 
 * now what is memory address?
 * It is a place where we store the data
 * And it is always represented by a Hexadecimal unit like oXFFFF123
 * 
 * remember 
 * int  -> 4 bytes
 * bool -> 1 bytes
 * etc.
 * 
 * now if we need to store int in memory we allocate 4 bytes to it
 * even if it is 1 or a million
 * 
 * if we need to store a boolean then we allocate 1 bytes for it
 * 
 * array of int will take 4 * no_of_variables bytes of memory and so on
 */

/**
 * To find where your variable is stored in the memory we use & (address operator) for this task
 * 
 * like to find the address of a we do this -> &a
 */


#include <iostream>
using namespace std;

int main()
{
    int     integer_1, integer_2;
    bool    boolean;
    float   floating;

    cout << "Integer 1 : " << &integer_1 << endl;
    cout << "Integer 2 : " << &integer_2 << endl;
    cout << "Boolean   : " << &boolean   << endl;
    cout << "Floating  : " << &floating  << endl;

    return 0;
}