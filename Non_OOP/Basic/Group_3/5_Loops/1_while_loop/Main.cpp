#include <iostream>
using namespace std;

/*

it will execute the statements in it until teh condition is not fulfilled
if the conditions are fulfilled it will exit
but if the conditions are already fulfilled it will not execute the instructions in it
because it first check the condition then execute it

*/

int main()
{

    string name;

    while (name.empty())    // name.empty() returns true until name contains something (if it is not null )
    {
        cout<< "Enter your name : ";
        getline( cin >> ws , name);
    }

    cout<< "Hello " << name << endl;

    return 0;
}