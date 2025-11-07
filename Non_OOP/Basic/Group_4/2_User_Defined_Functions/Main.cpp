#include <iostream>
using namespace std;

void greeting() 
{
    cout<< "Welcome" << endl;
    cout<< "now we will exit..." << endl;
}

int main()
{
    //A function is a block of code which can be used if that block of code is reused frequently
    //Also it can be used to make the main() code look sleek and pretty
    //Also fictions should be declared before main() functions as C++ is a top-down compiled language

    greeting();
    
    return 0;
}