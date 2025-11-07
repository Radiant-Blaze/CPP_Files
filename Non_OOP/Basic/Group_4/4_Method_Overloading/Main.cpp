/*
Method overloading is where method name is same but the arguments are different
there can be swap of argument datatype or different number of arguments!
dont worry i will refactor it as i have flu right now i dont want to write that much 'w'
*/

#include <iostream>
using namespace std;

double Area(double length)                                  { return ( length * length ); }
double Area(double length, double breath)                   { return ( length * breath ); }
double Area(double length, double breath, double height)    { return ( length * breath * height ); }

int main()
{
    double square, rectangle, cube;

    cout << "Area of square:\t\t"   << Area(2)      << endl;
    cout << "Area of rectangle:\t"  << Area(2,4)    << endl;
    cout << "Area of cube:\t\t"     << Area(2,4,6)  << endl;

    return 0;
}