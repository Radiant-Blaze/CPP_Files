#include <iostream>
using namespace std;

int find_Value(int array[], int size, int value);

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int value, size = sizeof(array) / sizeof(array[0]), check = 0;
    
    cout << "Enter the value you want to search : ";
    cin >> value;

    check = find_Value(array, size, value);

    if (check == 0)
    {
        cout << "Value " << value << " was not found in the array!" << endl;
        return 0;
    }else
    {
        cout << "Value was successfully found" << endl;
        return 0;
    }

    return 0;
}

int find_Value(int array[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            cout << "Value found at index : " << i << endl;
            return 1;
        }
    }

    return 0;
}