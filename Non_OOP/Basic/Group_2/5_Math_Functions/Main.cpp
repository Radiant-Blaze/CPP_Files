#include <iostream>
#include<math.h>
using namespace std;


// We need to include math.h before using these things otherwise errors



int main()
{
    double x = 3;
    double y = 6;
    double z;

    //  max( x,y )      -> we use this to find the big number from the two parameters
    z = max( x,y );

    cout<< " Biggest value between " << x << " and " << y << " = " << z << endl;

    //  min( x,y )      -> we use this to find the small number from the two parameters
    z = min( x,y );

    cout<< " Smallest value between " << x << " and " << y << " = " << z << endl;

    //  pow( x,y )      -> we use this to find the x raised to the power y
    z = min( x,y );

    cout<< " " << x << " ^ " << y << " = " << z << endl;

    //  sqrt( x )       -> to find the squarer root of x
    z = sqrt( y );

    //  abs( x )        -> to find the absolute value of x
    z = abs( -x );
    
    cout << " | " << -x << " | = " << z << endl;

    double a = 3.14;
    double b = 3.5 ;
    double c = 3.69;
    double i ,j ,k ;
    
    //  round( x )      -> to round the value normally
    i = round( a );
    j = round( b );
    k = round( c );

    cout<< " Rounding " << a << " results in : " << i << endl;
    cout<< " Rounding " << b << " results in : " << j << endl;
    cout<< " Rounding " << c << " results in : " << k << endl;

    //  ceil( x )       -> to round the value up the number always
    i = ceil( a );
    j = ceil( b );
    k = ceil( c );

    cout<< " Ceiling  " << a << " results in : " << i << endl;
    cout<< " Ceiling  " << b << " results in : " << j << endl;
    cout<< " Ceiling  " << c << " results in : " << k << endl;

    //  floor( x )      -> to round the value down the number always
    i = floor( a );
    j = floor( b );
    k = floor( c );

    cout<< " Flooring " << a << " results in : " << i << endl;
    cout<< " Flooring " << b << " results in : " << j << endl;
    cout<< " Flooring " << c << " results in : " << k << endl;

    return 0;
}