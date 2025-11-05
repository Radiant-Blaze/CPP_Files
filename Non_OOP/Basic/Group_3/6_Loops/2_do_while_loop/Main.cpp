#include <iostream>
using namespace std;

/*

unlike while loop if it will execute teh instructions in it once even if the condition is true
because it first execute the body then check the condition

*/

int main()
{

    int positive_number;

    do
    {
        cout<< "Enter a positive number : ";
        cin >> positive_number; 
    } while (positive_number < 0);

    cout << "Your positive number is : " << positive_number;
    

    return 0;
}