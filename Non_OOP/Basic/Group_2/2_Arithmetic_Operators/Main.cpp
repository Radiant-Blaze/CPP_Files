#include <iostream>
using namespace std;


/*

addition have 3 operations which are

c = a + b   -> c will store the values of a and b       -> c = 5 + 10       -> c = 15
a += b      -> can be translated to a = a + b           -> a = 5; a += 10;  -> a = 15  
a++         -> can be translated to a = a + 1           -> a = 5; a++;      -> a = 6


similarly subtraction have 3 operations

c = a - b   -> c will store the values of a and b       -> c = 5 - 10       -> c = -5
a -= b      -> can be translated to a = a - b           -> a = 5; a -= 10;  -> a = -5
a--         -> can be translated to a = a - 1           -> a = 5; a--;      -> a = 4


multiplication have 2 operations which are

c = a * b   -> c will store the values of a and b       -> c = 5 * 10       -> c = 50
a *= b      -> can be translated to a = a * b           -> a = 5; a *= 10;  -> a = 50


similarly division have 2 operations

c = a / b   -> c will store the values of a and b       -> c = 10 / 3       -> c = 3    -> remainder will be 1
a /= b      -> can be translated to a = a / b           -> a = 3; a /= 3;   -> a = 3

also we have a 5th operator which calculates the remainder of two functions which is

c = a % b   -> known as modulus operator                -> a = 10 % 3       -> a = 1    -> remainder = 1

*/

int main()
{

    int x = 10;
    int y = 3;

    int a = x;
    int b = x;
    int c = x;
    int d = x;
    int e = x;

    a = x + y;
    b = b - y;
    c = c * y;
    d = d / y;
    e = e % y;

    cout << x <<  " + " << y << " = " << a << endl;
    cout << x <<  " - " << y << " = " << b << endl;
    cout << x <<  " * " << y << " = " << c << endl;
    cout << x <<  " / " << y << " = " << d << endl;
    cout << x <<  " % " << y << " = " << e << endl;


    return 0;
}