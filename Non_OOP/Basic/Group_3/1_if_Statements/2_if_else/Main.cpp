#include <iostream>
using namespace std;

// will execute instructions in it if true else execute instructions in else block

int main()
{

    int age;

    cout<< "Enter your age to enter : ";
    cin >> age;

    if(age >= 18)
    {
        cout<< "Welcome!";
    }else
    {
        cout<< "You are not old enough to enter"<< endl;
        cout<< "Exiting";
    }

    return 0;
}