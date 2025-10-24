#include<iostream>

int main()
{
    std::cout<< "Hello World" << std::endl;
    std::cout<< "Line 2";
    std::cout<< "Without endl line will not change"<<std::endl;

    std::cout<< "\n";
    std::cout<<"We can use \\n for a new line insted for endl too" << std::endl;

    return 0;
}

/*

hey quick note for speed we use \n for speed
endl is used to clear input stream, hence before and after we take input we use endl

*/