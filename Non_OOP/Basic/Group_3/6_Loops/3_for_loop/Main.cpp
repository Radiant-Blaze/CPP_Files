#include <iostream>
using namespace std;

/*

consider that you want to do something until some period of time have passed that is for loop
you can do this with while loop too but we have specially this "for loop" for this case

like take a gacha game example
some of them have an idle fight system where we can fight level of mobs until we reach our end of stamina

lets say we have 200 stamina and each fight cost 10 stamina hence we can fight 20 times
if we initiate the auto fight loop we can do this

for ( counter=0; counter < 20; i++ )
{
    fight();
}

important info ->   counter = 0 -> initialization       counter < 20 -> condition       i++ -> increment/decrement

see here we will fight our counter will increases by 1, and this will go on until we reach 19 
"as our condition is until less than 20"

then we exit our loop and collect our reward.

this is the basic for loop

we can do it by while loop but as we have this thing we can use it
it all depends on you what is more convenient for you i personally love while loop ❤️

also we can do i-- but our count will go down and also our condition structure will change

that's all folks lets us do this example now

*/

int main()
{
    int counter, number;

    cout<< "-------------------------------------------" << endl;
    cout<< "---------------Table Printer---------------" << endl;
    cout<< "-------------------------------------------" << endl;

    cout<< "enter last limit : ";
    cin >> counter;

    cout<< "enter number : ";
    cin >> number;

    for( int i=1; i <= counter; i++)
    {
        cout<< number << " x " << i << " = " << ( number * i ) << endl;
    }

    return 0;
}