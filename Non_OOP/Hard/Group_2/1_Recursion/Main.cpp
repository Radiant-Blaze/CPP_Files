/**
 * Recursion is repetition of functions to break the complexity of program
 * Function Invokes itself from teh function until a base case is satisfied
 */

#include <iostream>
using namespace std;

int Factorial(const int value);

int main()
{
    int result, factorial;

    cout << "Enter the number whose Factorial ou want : ";
    cin >> factorial;

    result = Factorial(factorial);

    if (result == -1)
    {
        return 0;
    }

    cout << "Factorial of " << factorial << " = " << result << endl;
    

    return 0;
}

int Factorial(const int value)
{
    if (value < 0)
    {
        cout << "Negative numbers can't have factorials!" << endl;
        return -1;

    }else if (value == 0 || value == 1)
    {
        return 1;
    }

    return value * Factorial(value - 1);
}