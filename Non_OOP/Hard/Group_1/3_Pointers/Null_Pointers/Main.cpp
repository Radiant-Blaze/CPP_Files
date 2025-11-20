/**
 * C++ is a magical language, as manipulating memory is wizardry
 * 
 * now what is nullptr?
 * this is a special value given to a pointer that tells the
 * compiler this pointer does not point to any memory location
 * 
 * it is a good practice to asign nullptr to pointers when not 
 * assigned any value straight away as it can lead to unexpected behaviors
 */

#include <iostream>
using namespace std;

int main()
{
    int *ptr = nullptr;

    int value = 10;
    ptr = &value;

    if (ptr == nullptr)
    {
        cout << "Pointer was not assigned any value!" << endl;
    }else
    {
        cout << "value : " << *ptr << endl;
    }
    
    

    return 0;
}