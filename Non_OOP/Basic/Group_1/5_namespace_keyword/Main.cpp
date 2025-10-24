#include <iostream>

namespace first  { int x = 1; }
namespace second { int x = 2; }
namespace third  { int x = 3; }

int main()
{
    int x = 0;
    
    std::cout<< "Value of x in local  parameter : " << x << std::endl;
    std::cout<< "Value of x in first  parameter : " << first::x << std::endl;
    std::cout<< "Value of x in second parameter : " << second::x << std::endl;

    /* using namespace third;
    std::cout<< "value of x in third  parameter : " << x << std::endl;
    */      // use when commenting out local variable

    return 0;
}