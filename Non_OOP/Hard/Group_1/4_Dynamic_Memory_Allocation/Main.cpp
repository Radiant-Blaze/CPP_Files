/**
 * just like in java when you declare 
 * int[] arr = new int[5];
 * 
 * we do something like this in C++ too.
 * 
 * for example you have a variable you want to store values, but you don't know
 * how many values the user wants so you dynamically allocate the memory as
 * 
 * int n;
 * n = user input;
 * 
 * int *arr = new int[n];
 * 
 * (we can only allocate memory to pointers)
 * due to the reason, normal variables can't access heap memory is C++
 * 
 * but unlike Java where we have garbage collector, we need to manually
 * deallocate the memory, by using delete[] arr;
 * 
 * which will delete tge array or a dynamically allocated variable in memory
 * otherwise we will encounter memory leakage which is bad
 * as variables eat your resources and hog memory until complete restart of system
 * 
 * remember we dynamically allocate memory in heap
 * but stack (int, float etc. ) are statically typed in C++ (modern compilers have some workarounds)
 * 
 * like int arr[n]
 * should not be possible as it is not in ISO C++ (VLAs are not supported)
 * but compilers like GCC and Clang make this possible by using Variable Length Arrays VLAs (preconfigure)
 * 
 * if you do this in older IDEs like Turbo C++, this will not run
 * due to dynamic allocation
 */

#include <iostream>
using namespace std;

int main()
{
    int many;

    cout << "Enter the number of numbers to enter : ";
    cin >> many;

    int *arr = new int[many];

    for(int i = 0; i < many; i++)
    {
        cout << "Enter the " << i << "th value : ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "You entered : ";
    for (int i = 0; i < many; i++)
    {
        cout << arr[i];
        cout << ", ";
    }

    delete[] arr;
    
    return 0;
}