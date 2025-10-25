#include <iostream>
using namespace std;

int main()
{

    double temp, temp_converted;
    char unit;

    cout<< "Enter the letter in which you convert your temperature to" << endl;
    cout<< "fahrenheit : F" << endl;
    cout<< "Celsius    : C" << endl;

    cout<< "\n";
    cout<< "What unit would you like to convert to : ";
    cin >> unit;
    
    if( unit == 'f' || unit == 'F')
    {
        cout<< "Enter the temperature in Celsius : ";
        cin >> temp;

        temp_converted = ( 1.8 * temp ) + 32;
        cout<< temp << " °C" << " in Fahrenheit = " << temp_converted << " °F"; 
    }else if ( unit == 'c' || unit == 'C')
    {
        cout<< "Enter the temperature in Fahrenheit : ";
        cin >> temp;

        temp_converted = ( temp - 32 ) / 1.8;
        cout<< temp << " °F" << " in Celsius = " << temp_converted << " °C"; 
    }else
    {
        cout<< "you have entered a wrong letter!";
    }

    return 0;
}