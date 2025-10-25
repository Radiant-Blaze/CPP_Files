#include <iostream>
using namespace std;

int main()
{

    cout<< "-----------------------------------------------" << endl;
    cout<< "---------------SIMPLE CALCULATOR---------------" << endl;
    cout<< "-----------------------------------------------" << endl;
    cout<< "\n";

    double a, b, result;
    char option;

    cout<< "Enter the first variable  : ";
    cin >> a;

    cout<< "Enter the second variable : ";
    cin>> b;

    cout<< "Enter the operation from here  (+ - * /) : ";
    cin >> option;

    cout<< "\n";
    
    switch ( option )
    {
        case '+' : result = a + b; break;
        case '-' : result = a - b; break;
        case '*' : result = a * b; break;
        case '/' : 
                    if( b > 0 )
                    {
                        result = a / b;
                    }else
                    {
                        cout<< "INVALID DENOMINATOR CAN'T BE ZERO!!!!!" << endl;
                        cout<< "EXITING!!!" << endl;
                        return 0;
                    }
        break;

        default  : cout<< "INVALID INPUT EXITING!!!"; return -1; break;
    }

    cout<< a << " " << option << " " << b << " = " << result << endl;
    cout<< "-----------------------------------------------" << endl;


    return 0;
}