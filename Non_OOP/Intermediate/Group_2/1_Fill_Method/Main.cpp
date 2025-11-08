/**
 * we use fill() to populate the array
 * fill(begin, end          , thing_which_will_be_stored)
 * fill(array, array + index, thing_which_will_be_stored)
 */

#include <iostream>
using namespace std;

int main()
{
    string arr[100];
    int size = 100;

    fill(arr, arr + (size/2), "Hello");
    fill(arr + (size/2), arr + size, "World");

    for(string element : arr)
    {
        cout << element << endl;
    }

    return 0;
}