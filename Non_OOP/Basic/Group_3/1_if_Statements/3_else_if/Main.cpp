#include <iostream>
using namespace std;

int main()
{

    int age;

    cout<< "Enter your age to enter : ";
    cin >> age;

    if( age < 18)
    {
        cout<< "Sorry you can't enter" << endl;
    }else if ( age > 100 )
    {
        cout<< "You are IMMORTAL!" << endl;
    }else if ( age >= 18)
    {
        cout<< "Welcome!" << endl;
    }else
    {
        cout << "You broke the system :(" << endl;
    }

    cout << "Exiting" << endl;

    return 0;
}