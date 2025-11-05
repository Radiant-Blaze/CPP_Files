#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device seed;
    mt19937_64 generator(seed());
    uniform_int_distribution<> number_Generator(1,100);

    int number = number_Generator(generator);

    int guess;
    bool running = true;
    int i = 1;

    while (running)
    {
        cout << "Enter your Guess : ";
        cin >> guess;

        if (guess == number)
        {
            cout << "You got the correct answer! in " << i << " tries!" << endl;
            cout << "THe number was " << number << endl;
            running = false;
        }
        else if(guess < number)            {cout << "Number is higher!\n" << endl;}
        else if(guess > number)            {cout << "Number is lower!\n" << endl;}
        
        i++;
    }
    

    return 0;
}