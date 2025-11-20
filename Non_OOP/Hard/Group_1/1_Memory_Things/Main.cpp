/**
 * Lets say you want pass value to a function to swap the value of two functions
 * like void(int a, int b)
 * 
 * if you swap them like
 * temp = a
 * a = b
 * b = temp
 * 
 * now if you see their value they hadn't been changed.
 * You may ask i changed their values but how
 * 
 * now when we pass values to a function we make a copy of the variables.
 * Hence in our example we only worked on our copied variable not our original one that's why
 * their values wasn't changed
 * 
 * where the variables we have are not stored at the same place as their main() counterpart
 * hence any work done on passes variables will have no effect on our original one as they are only a copy
 * 
 * Hence we can pass values to a function by two ways:
 * 
 * 1) Pass by Value         -> makes copy of the function
 * 2) Pass by Reference     -> gives the memory address of the original variable
 * 
 * we can pass by reference by preceding the variable by & sign
 * hence our original declaration will change to
 * void(int &a, int &b)
 * 
 * and we will change nothing, therefore if we want to work on our original values
 * we will pass their address to the function
 * 
 * also you must almost always passs by reference, until or unless you have to pass by value
 * 
 */

#include <iostream>
using namespace std;

//void swap(int a, int b);  -> this example will not work
void swap(int &a, int &b);

int main()
{
    int a = 5, b = 10;

    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;
    cout << endl;

    swap(a,b);

    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    return 0;
}

/*
void swap(int a, int b)
{
    int temp = 0;
    
    temp = a;
    a = b;
    b = temp;
}
*/

void swap(int &a, int &b)
{
    int temp = 0;
    
    temp = a;
    a = b;
    b = temp;
}