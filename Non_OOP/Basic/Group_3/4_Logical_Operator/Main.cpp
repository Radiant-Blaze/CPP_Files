#include <iostream>
using namespace std;


/*

there are three logical operators

&& is known as and operator it will only be true  if both conditions are true  otherwise it will be false always
|| is known as or  operator it will only be false if both conditions are false otherwise it will be true  always
!  is known as not operator it will reverse the boolean value if true it will become false and respectively

*/

int main()
{

    int age, experience;

    cout<< "Enter your age : ";
    cin >> age;

    cout<< "Enter your work experience in years : ";
    cin >> experience;

    if ( ( age <=40 && age >= 18) && experience >=3 )
    {
        cout<< "YOU ARE HIRED!";
    }else if ( (age <= 60 && age >=18) || experience >=7 )
    {
        cout<< "YOU ARE HIRED!";
    }else
    {
        cout<< "Sorry you don't pass our qualification requirements";
    }

    return 0;
}