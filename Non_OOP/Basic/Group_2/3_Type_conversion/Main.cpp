#include<iostream>
using namespace std;

/*

type conversion is changing a variables data type during conversion to aid in calculations

like if we have two int variables and if we divide them it will have 
different result then expected as we are doing integer division

hence you will cast every int data in double -> just take double everytime
you need number input it have less hassle

there are two ways to type cast
        implicit    -> automatic
        explicit    -> manual

see program to understand them

also typecasting can't change the variable type, it only handles it like we want it to temporaily
like we can't store double in int but we can make it to work like int if we want to (Temporarily)

*/

int main()
{

    char letter = 67;
    cout<< letter << endl;

    //Here we implicitly type casted int value to char by ASCII table

    double GPA;
    GPA = (int) 3.7;
    cout << GPA << endl;

    // Here we implicitly (told compiler) to type cast double datatype into int
    // also we can't store things that are out of range for the datatype like double in int
    // example can be

    int x;
    x = (double) 3.14;
    cout << x << endl;

    //here we see it can only behave it like them not change it entirety

    /*
    you can act like a elf in a play but
    you will never be elf as you are a human
    */

    return 0;
}