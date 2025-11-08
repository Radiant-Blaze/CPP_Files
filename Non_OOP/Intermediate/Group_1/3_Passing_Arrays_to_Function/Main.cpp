// This is a workaround i will talk about it in fuctions step by step

#include <iostream>
using namespace std;

//double total(double arr[]);         
//this will not work as the array we give only have pointer to it 
//not the entire array hence we need to give it an array size as we can't 
//calclatetee size from hexadecimal pointer simple

double calculate_Total(double arr[], int size);

int main()
{
    double prices[] = { 10.9, 114, 17.81, 18.78, 52.48};
    int size = sizeof(prices) / sizeof(prices[0]);
    
    double total = calculate_Total(prices, size);

    cout << "Total : " << total << endl;

    return 0;
}

double calculate_Total(double arr[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }

    //this is the reason we can't use for each loop 
    //as it only have the pointer to the location not the array where it can treverse it

    /*for(double i : arr)
    {
        total += i
    }*/

    return total;
}
