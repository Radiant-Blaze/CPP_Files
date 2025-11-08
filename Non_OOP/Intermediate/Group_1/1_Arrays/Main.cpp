/*
Ok so what are arrays? you may ask
they are a group of same type of variables combined to form a single variable stored together in memory

It is very easy to understand if you visualize it

suppose     int i -> |____|
similarly   int j -> |____|

if we visualize them in memory 

   i     j
|____||____|

if we say array of integers like int k[2]   here 2 is the number of variables of k hence

        k
|    i     j   |
| |____||____| |

here we can see k contain two variables i and j, this is the core principle of array in C++

we declare an array tell it how much space (variables) 
you need to be in the array and boom you get teh array to store data

also remember we can only store ine type of data only that is what we declared it to be
also total size of array is equal to        -> data_type_size   * total_variables
if we say                   int arr[4]      ->      4           *       4           = 16 bytes

lets say you want t =o access the first value of array arr
what you will do is arr[0]  ;as array's index start at 0 we do this

*/

#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1,2,3};

    for (int i = 0; i < 3; i++)
    {
        cout << "Array at index  " << i << " = " << arr[i] 
             << " which is stored at memory address : " << &arr[i] << endl;
    }
    
    /*
    after compiling you will see that every variable is stored at +4 position from it's previous counterpart
    hence this proves our point that array is stored at continuous memory locations  
    */

    return 0;
}