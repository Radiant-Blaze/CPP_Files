#include <iostream>
using namespace std;

/*

break will exit from the iteration mostly loops -> we also used break; in switch to exit 
switch block    -> skip the entire thing

continue will skip the current iteration, like if you want to skip a step or a group of numbers we use
it there        -> skip only a single step

*/

int main()
{
    int  count;
    char choice;

    cout<< "----------------------------------------" << endl;
    cout<< "-----ODD / EVEN NUMBER SHOW PROGRAM-----" << endl;
    cout<< "----------------------------------------" << endl;
    cout<< "\n";

    cout<< "enter \"o\" for odd  numbers" << endl;
    cout<< "enter \"e\" for even numbers" << endl;
    cout<< "\n";

    cout<< "Enter your choice : ";
    cin >> choice;
    cout<< "\n";

    cout<< "Enter your last digit";
    cin >> count;

    for( int i=0; i <= count; i++)
    {
        //this is for odd numbers

        if ( choice == 'o' || choice == 'O')
        {
            if ( (i % 2) == 0)
            {
                continue;
            }else
            {
                cout << i << endl;
            }
        } 

        // this is for even numbers

        else if ( choice == 'e' || choice == 'E')
        {
            if ( (i % 2) == 0)
            {
                cout << i << endl;
            }else
            {
                continue;
            }
        }else
        {
            cout << "Wrong input!" << endl;
        }
        
    }

    return 0;
}