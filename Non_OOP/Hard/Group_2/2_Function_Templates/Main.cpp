/**
 * Just like in Java Generics work to take different data types as input we have
 * 
 * Templates here work vastly different than generics
 * and i envy this as this helps us so much in creating overloaded methods
 * 
 * suppose there are two variables and you want to see which one is bigger
 * instead of making functions for int, float, char etc. 
 * we can use templates to automatically overload the method
 * like
 * 
 * T max(T x, T y)
 * {
 *      return (x > y) ? x : y;
 * }
 * 
 * but there is a problem if user inputs two different variables then we will
 * 
 * auto max(T x, U y)
 * {
 *      return (x > y) ? x : y;
 * }
 * 
 * here compiler will se which type to return so there is no hassle for it
 * 
 * also you need to include template <typename T> to make it work
 * 
 */

#include <iostream>
using namespace std;

template <typename Type_A, typename Type_B>
auto max(Type_A value_1, Type_B value_2)
{
    return (value_1 > value_2) ? value_1 : value_2;
}


int main()
{
    cout << max(std::string("a") , std::string("b")) << endl; //otherwise it will compare pointers
    cout << max(1, 2) << endl;
    cout << max(1.1, 3) << endl;
    cout << max(3, 2.2) << endl;

    return 0;
}