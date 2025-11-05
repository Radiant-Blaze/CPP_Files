#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));

    int number = rand() % 100 + 1;

    int guess, i = 1;
    int running = true;
    
    while (running)
    {
        cout << "Enter your guess : ";
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