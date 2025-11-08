#include <iostream>
using namespace std;

void bubble_sort(int array[],int size);

int main()
{
    int elements;

    cout << "Enter the number fo elements you want to enter : ";
    cin >> elements;

    int array[elements];

    for (int i = 0; i < elements; i++)
    {
        cout<< "Enter the " << (i+1) << " value : ";
        cin >> array[i];
    }
    
    bubble_sort(array,elements);

    return 0;
}

void bubble_sort(int array[],int size)
{
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }

    cout << "Sortred Array : " ;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ,";
    }
    
    
}
