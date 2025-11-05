#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));

    int ran_num = rand() % 10 + 1;

    switch(ran_num)
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
        default : cout << "UNEXPECTED ERROR OCCURRED! EXITING!" << endl;
    }

    return 0;
}