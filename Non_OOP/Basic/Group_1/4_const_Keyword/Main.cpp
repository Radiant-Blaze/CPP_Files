#include <iostream>

int main()
{
    // const keyword will act like final in Java
    // if you are not familiar const will not let you change the value of a variable after you declare and initialize it

    const double PI = 3.1459;
    //PI = 3.145       // This will result in an error

    std::cout<< "Value of PI is = " << PI << std::endl;

    return 0;
}