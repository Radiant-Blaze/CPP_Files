#include <iostream>
using namespace std;

void printArray(int arr[], int size);

int main()
{
    system("cls");

    int arr[] = { 2, 4, 6, 8, 10, 1, 3, 5, 7, 9 };
    int size = sizeof(arr) / sizeof( arr[0] );

    cout << "Original Array : " ;
    printArray(arr, size);

    int minIndex, temp;

    for (int i = 0; i < size; i++)
    {
        minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j]) // we find minimum value index here and swap with the first index to make it the min value
            {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        
    }

    cout << "Sorted Array   : ";
    printArray(arr, size);

    return 0;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ,";
    }

    cout << endl;
}

// This is a little bit tricky i recommend you watch this video

// Bro Code link: https://www.youtube.com/watch?v=EwjnF7rFLns&list=PLZPZq0r_RZON1eaqfafTnEexRzuHbfZX8&index=13