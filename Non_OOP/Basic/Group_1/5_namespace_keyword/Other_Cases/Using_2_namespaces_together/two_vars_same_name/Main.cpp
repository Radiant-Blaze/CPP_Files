#include <iostream>

namespace first   { int x = 1, y = 1; }
namespace second  { int x = 2, z = 2; }

using namespace std;
using namespace first;
using namespace second;

int main()
{

    cout<< "Value of y = " << y << endl;
    cout<< "Value of z = " << z << endl;

    cout<< "Value of x = " << first::x  << endl;
    cout<< "Value of x = " << second::x << endl;

    //cout<< "Value of x = " << x << endl ;
    //this line will give error as compiler don't know which x to use

    return 0;
}