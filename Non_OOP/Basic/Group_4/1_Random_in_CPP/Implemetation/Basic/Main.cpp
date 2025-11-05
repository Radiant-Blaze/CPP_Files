#include <iostream>
using namespace std;

int main()
{
    /*
    Today we will talk about how to use random numbers in C++
    remember these random values we get will not be true random put pseudo random (close to randomness)
    why? we still haven't figured out how true randomness work so we achieve that by various algorithms
    */

    //ok this is the basic implementations i will have another implementations too

    srand( time(NULL) );

    int random = ( rand() % 6 + 1 );

    cout << "Random number from 1-6 : " << random << endl;

    return 0;
}