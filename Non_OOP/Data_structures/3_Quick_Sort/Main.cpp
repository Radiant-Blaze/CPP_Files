#include <iostream>
using namespace std;

void  QuickSort(int arr[], int low, int high);
int   Partition(int arr[], int low, int high);
void printArray(int arr[], int high);

int main()
{
    int arr[] = {2,4,6,8,1,3,5,7};
    int size =sizeof(arr)/ sizeof(arr[0]);

    cout << "Original Array : ";
    printArray(arr,size);

    QuickSort(arr,0,size-1);

    cout << "Sorted Array   : ";
    printArray(arr,size);
    

    return 0;
}

void printArray(int arr[], int high)
{
    for (int i = 0; i < high; i++)
    {
        cout << arr[i] << " ,";
    }
    cout << endl;
}

void QuickSort(int arr[], int low, int high)
{
    if (low >= high)    { return; }

    int pivotIndex = Partition(arr, low, high);

    QuickSort(arr,0, pivotIndex - 1);
    QuickSort(arr, pivotIndex + 1, high);
}

int Partition(int arr[], int low, int high)
{
    int smallestIndex = low;
    int pivot = arr[high];
    int temp;

    for (int i = low; i < high; i++)
    {
        if (arr[i] < pivot)
        {
            temp = arr[i];
            arr[i] = arr[smallestIndex];
            arr[smallestIndex] = temp;

            smallestIndex++;
        }
    }

    temp = arr[smallestIndex];
    arr[smallestIndex] = arr[high];
    arr[high] = temp;

    return smallestIndex;
}
