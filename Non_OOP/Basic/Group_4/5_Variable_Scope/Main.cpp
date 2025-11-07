/*
also another rant here C++ DONT SUPPORT NESTED FUNCTIONS! WHY DO THIS LANGUAGE MAKE MY LIFE HARDER?

Local Variables: those variables that are declared in function
. can't be accessed from outside the fiction
. can be the same name as the global variables

Global Variable: those variables declared and defined outside any function or block of code
. can be access from any inner function

if a function have no local variable it will look outside teh function and use it
Local -> Global

*/

#include <iostream>
using namespace std;

int number = 5;

int main()
{
    int number = 10;

    cout << "Global Variable : " << ::number << endl;
    cout << "Local  Variable : " <<   number << endl;

    return 0;
}