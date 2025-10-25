#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    double base, height;
    double hypotenuse;

    cout<< "---------------------------------"  << endl;
    cout<< "------HYPOTENUSE CALCULATOR------"  << endl;
    cout<< "---------------------------------"  << endl;
    cout<< "\n";

    cout<< "Enter your triangle's base   : ";
    cin >> base;

    cout<< "Enter your triangle's height : ";
    cin >> height;

    hypotenuse = sqrt( (   pow( base , 2 ) + pow( height , 2 )   ) );
    cout<< "Hypotenuse of the triangle is : " << hypotenuse << endl;

    return 0;
}