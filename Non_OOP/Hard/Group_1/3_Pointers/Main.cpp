/**
 * Points point to a location of a variable rather than have the value of that pointed variable
 * Why? because sometimes it is easy and efficient to have an address than the value
 * 
 * like if i manage a store inventory i will not always carry each and every
 * item with me, rather i will have an inventory list, if someone wants an item
 * i will point to that items location, not the item itself
 * 
 * also a pointer must always have this format (you can also assign it later)
 * 
 * 1)   int *pointer = &value;
 * 
 * 2)   int *pointer;
 *      pointer = &value;
 * 
 * and there is no other way to declare or store a pointer
 * 
 * *    -> Dereferencing    Operator                    (access the value stored at a pointer)
 * &    -> Referencing      Operator / Address Operator (get the address of the variable)
 * 
 * value    -> gives value                  -> 10
 * &value   -> gives address (of value)     -> 0x00FBA
 * 
 * *pointer -> gives value                  -> 10
 * &pointer -> gives address (of pointer)   -> 0xFFFF0
 * 
 * also an important point the arrays point to a location hance they don't need a pointer to point them
 * if we display
 * 
 * arr  -> 0xFFFF0
 * *arr -> 10 (first element of the array)
 */

#include <iostream>
using namespace std;

int main()
{
    int value   = 10;
    int *pValve  = &value;

    cout << "Value                  : " << value    << endl;
    cout << "Value by pointer       : " << *pValve  << endl;
    cout << "Address (of value)     : " << &value   << endl;
    cout << "Address (of pointer)   : " << &pValve  << endl;

    return 0;
}