#include <iostream>
using namespace std;

double Area_Calculator(double length, double breath);
//This is called function declaration and we will define 
//the working of it after the main function for prettiness

int main()
{
    //return statement just returns the value after the function terminates

    double length, breath, area;

    cout << "Enter the length of the rectangle : ";
    cin >> length;

    cout << "Enter the breath of the rectangle : ";
    cin >> breath;

    area = Area_Calculator( length, breath );

    cout << "Area of square having length : " << length << " and breath : " << breath << " = " << area << endl;

    return 0;
}

double Area_Calculator(double length, double breath)    { return ( length * breath ); }
//we defined this function here