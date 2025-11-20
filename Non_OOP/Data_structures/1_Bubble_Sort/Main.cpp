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


    int temp;

    for (int outer = 0; outer < size; outer++)
    {
        for (int inner = 0; inner < size - outer - 1; inner++)
        {
            if (arr[inner] > arr[inner + 1])
            {
                temp = arr[inner];
                arr[inner] = arr[inner + 1];
                arr[inner + 1] = temp;
            }
            
        }
        
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

/**
 * Explanation
 * 
 * line 19:
 * here we initialize the outer loop like we will only go until the last element of the array
 * 
 * if size = 10, then only go until 10
 * 
 * line 21:
 * see this thing
 * 
 * inner < size - outer - 1
 * 
 * let us break it into this first
 * 
 * inner < size - 1
 * 
 * why we do this, the reason is when it comes to the last element to check it will check the next element
 * which does not exist like
 * 
 * arr = {1,2,3,4,5}
 * if it check the element '5' it have no i + 1th element
 * arr[inner] > arr[inner + 1]      -> 5 will have no next value to be compared with                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
 * last element will be checked by a garbage value
 * 
 * hence we do size - 1 comparision
 * 
 * now see this
 * 
 * inner < size - outer - 1
 * 
 * like if we complete a single iteration where
 * arr = 2 ,4 ,6 ,8 ,10 ,1 ,3 ,5 ,7 ,9 ,
 * 
 * becomes
 * arr = 2 ,4 ,6 ,8 ,1 ,3 ,5 ,7 ,9 , 10
 * 
 * see the last element it will be biggest for every iteration hence 
 * we will check for n - 1 element to reduce the strain on our CPU
 */

 // if you don't understand see the AI notes

 /**
 * Explanation of the Bubble Sort loops
 * 
 * line 19 (outer loop):
 * The outer loop runs 'size' times. Each full pass pushes the largest
 * remaining element to the end of the array, like a bubble rising up.
 *
 * line 21 (inner loop):
 * Condition: inner < size - outer - 1
 *
 * First understand the simple version:
 * 
 *      inner < size - 1
 *
 * Why '-1' ?
 * Because arr[inner] is compared with arr[inner + 1].
 * If we allow inner to reach the last index, inner + 1 will go OUT OF BOUNDS.
 * Example:
 * 
 *      arr = {1,2,3,4,5}
 *      last index = 4
 *
 * If inner = 4:
 *      arr[4] > arr[5]    // arr[5] does NOT exist → invalid
 *
 * So we stop at index (size - 2) for safe comparison.
 *
 * Now the optimized version:
 *      
 *      inner < size - outer - 1
 *
 * Every time the outer loop completes one full pass,
 * the largest element among the unsorted part moves to the END.
 *
 * Example:
 * Before 1st pass:
 *      2,4,6,8,10,1,3,5,7,9
 *
 * After 1st pass:
 *      2,4,6,8,1,3,5,7,9,10
 *                ↑       ↑
 *            unsorted   sorted (largest)
 *
 * This means the LAST element is already sorted,
 * so no need to compare it again.
 *
 * Therefore:
 *      1st outer pass → check (size - 1) elements
 *      2nd outer pass → check (size - 2) elements
 *      … and so on
 *
 * This reduces unnecessary work and saves CPU time.
 */


 //Bro code link: https://www.youtube.com/watch?v=Dv4qLJcxus8&list=PLZPZq0r_RZON1eaqfafTnEexRzuHbfZX8&index=12

 // This guy will tell you everything very