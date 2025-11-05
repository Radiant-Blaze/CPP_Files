#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device device;
    mt19937_64 seed(device());

    uniform_int_distribution<> number_Generator(1,10);

    int ran_num = number_Generator(seed);

    switch (ran_num)
    {
        case 1  : cout << "YOU WIN!" << endl; break;
        case 2  : cout << "You lose" << endl; break;
        case 3  : cout << "You lose" << endl; break; 
        case 4  : cout << "You lose" << endl; break;
        case 5  : cout << "You lose" << endl; break;
        case 6  : cout << "You lose" << endl; break;
        case 7  : cout << "You lose" << endl; break;
        case 8  : cout << "You lose" << endl; break;
        case 9  : cout << "You lose" << endl; break;
        case 10 : cout << "You lose" << endl; break;
        default : cout << "UNEXPECTED ERROR OCCURRED! EXITING"; break;
    }

    return 0;
}