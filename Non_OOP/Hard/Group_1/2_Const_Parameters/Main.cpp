/**
 * If you pass a value to a function and if you don't want that value to change
 * the copied variable's value that you can preced the variable by const keyword
 * this will give an error to programmer don't change that value if changed and
//  * also it is a good practice to use this for references and pointers
this also makes the code more secure (no breach of data can happen) 
 */

#include <iostream>
using namespace std;

void print_Details (const double balance, const string name);

int main()
{
    double balance  = 1570000.00;
    string name     = "Harry Potter";

    print_Details(balance, name);

    return 0;
}

void print_Details (const double balance, const string name)
{
    //balance = -1; -> will give error

    cout << "Name       : " << name     << endl;
    cout << "Balance    : " << balance  << endl;
}