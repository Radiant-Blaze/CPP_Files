/**
 * ok so this sizeof() operator determines the size of the variable, data type, class, objects etc.
 * it is helpful if you want to calculate how much big your array is in size wise also by index wise
 * 
 * lets see if we have
 * 
 * int x;
 * then sizeof(x) will be 4 bytes as int takes 4 bytees in memory to store
 * 
 * similarly if we have
 * int arr[10]
 * then sizeof(arr) will give 40 as we have 10 separate int variables stored in the array
 * 
 * ok now if you want to find out how many elements your array have we can do this simple calculation
 * 
 * if arr[10]
 * then size = sizeof(arr) / sizeof(arr[1]);
 * 
 * here 
 * sizeof(arr)      = 40 
 * sizeof(arr[0])   = 4
 * 
 * hence size = 40 / 4 = 10
 * 
 * what this will give is total size / size of a single element hence
 * this will give 10 elements therefore we can use this to automatically put it 
 * in loop instead of using other methods
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total variables you want to store : ";
    cin >> n;

    int arr[n], size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element : ";
        cin >> arr[i];
    }
    system("cls");

    cout << "Total elements were : " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Element at index " << i << " = " << arr[i] << endl;
    }
    
    

    return 0;
}