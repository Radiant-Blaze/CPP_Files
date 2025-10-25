#include <iostream>

/*

hey quick thing we can also use variables with string literals

std::cout<< "Hello" << std::endl;
in this line "Hello" is a string literal

to use variables with string literal we do this 

std::string name = "Emiya Shirou";
std::cout<< "Hello " << name << std::endl;

we will print Hello Larry here
*/

int main()
{
    // int -> can store whole numbers only
    int age = 18;
    int example = 7.5;  //compiler will ignore .5 and will only print 7

    std::cout<< "Age = " << age << " is the example of integer data type" <<std::endl;
    std::cout<< "As we are using an integer datatype here our compiler will ignore the decimals hence 7.5 will become "
    << example << std::endl;

    std::cout<<"\n";

    //double -> can store decimals too with whole numbers
    double temp = 32.5;
    double GPA  = 4;

    std::cout<< "As temperature can have decimal like " << temp << " we use double to store it" << std::endl;
    std::cout<< "We can also store whole numbers in double " << GPA << std::endl;

    std::cout<<"\n";

    // boolean -> can store true or false in them
    bool a = true;
    bool b = false;

    std::cout<< "both a = " << a << " and b = " << b << " are examples of boolean data type" << std::endl;
    std::cout<<"\n";

    //string -> objects that represent a sequence of text

    std::string statement  = "we can use anything in string variables like characters numbers 123 and special character !@#";

    std::cout<< statement << std::endl;

    std::cout<< '\n' << "This is a string literal" << std::endl;

    return 0;
}