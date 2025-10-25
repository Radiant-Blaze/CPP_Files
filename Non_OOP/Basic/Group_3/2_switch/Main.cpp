#include <iostream>
using namespace std;

/*

another rant about C++
HAHAHAHAAHAHA IT DON'T HAVE ENHANCED FOR LOOP HAHAAHAHAHHAHHAHAHHA
i am going insane...

*/

/*

switch will take a variable and compare it to the case it have if the cases match
that line until break condition will execute else if no cases are satisfied we
will execute the default case

*/

int main()
{

    int day;

    cout<< "Enter any number from (1-10) to get a Blur Archive character : ";
    cin >> day;

    switch (day)
    {
        case 1 : cout<< "you get Nekozuka Hibiki";                  break;
        case 2 : cout<< "you get Hayase Yuuka";                     break;
        case 3 : cout<< "you get Sorasaki Hina";                    break;
        case 4 : cout<< "you get Toyomi Kotori (Cheerleader)";      break;
        case 5 : cout<< "you get Tsukatsuki Rio";                   break;
        case 6 : cout<< "you get Misono Mika";                      break;
        case 7 : cout<< "you get Waraku Chise";                     break;
        case 8 : cout<< "you get Tachibana Hikari";                 break;
        case 9 : cout<< "you get Tachibana Nozomi";                 break;
        case 10: cout<< "you get Utsumi Aoba";                      break;
        default: cout<< "as a punishment you get Black Suit";       break;
    }

    return 0;
}