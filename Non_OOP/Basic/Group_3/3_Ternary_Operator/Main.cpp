#include <iostream>
using namespace std;

/*

Programmers are lazy creatures like they invented if-else to run on the same line

like 

condition ? true : false;

if( condition )
{
    true
}else
{
    false
}

hence for 1 in a million condition we can use ternary operator
this is in every programming language known to man... hence every
language have the same syntax for ternary operator

*/

int main()
{

    int age;

    cout<< "Enter your age to enter : ";
    cin >> age;

    (age >= 18) ? cout << "You can enter" << endl : cout << "You can't enter" << endl;

    return 0;
}