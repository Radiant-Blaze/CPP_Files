/**
 * Enums ae like Hashmaps (NOT LIKE THEM IN ANY WAY)
 * 
 * remember the key value pairs
 * 
 * similarly if you want to give a string (kind of) an 
 * integer value then we can use enums
 */

enum Days       {monday, tuseday, wednesday, thursday, friday, saturday, sunday};

enum Food_Number{Cookie = 1, Cake = 3, Chocolate = 2, Jelly = 5};

/**
 * Enums can automatically assign numbers like in days
 * Enums can also be assigned values like in Food_Number
 * Enums can be assigned random numbers like in Food_Number
 * Enums can also assign the unassigned numbers 
 * (but the previous numbers must be assigned in proper order || previous number should be largest)
 */

#include <iostream>
using namespace std;

//ONLY THE MAIN FUNCTION IS MADE BY AI (i was lazyyyyyy)

int main()
{
    // Accessing enum values
    Days today = friday;
    Food_Number dessert = Cake;

    cout << "Today is day number: " << today << endl;             // prints 4 (since counting starts at 0)
    cout << "Dessert 'Cake' has food number: " << dessert << endl; // prints 3

    // You can also compare enums like integers
    if (dessert == 3)
        cout << "Yes, Cake has value 3!" << endl;

    // Looping through an enum (needs care since enums aren’t iterable by default)
    cout << "\nDays of the week with their numeric values:\n";
    for (int i = monday; i <= sunday; i++)
        cout << i << " ";

    cout << endl;
    return 0;
}