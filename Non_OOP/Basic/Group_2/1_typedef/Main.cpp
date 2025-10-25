#include<iostream>
using namespace std;

typedef string words;

// we can use words name || string name
// we use them to improve our readability in our code like you know
// lets take an example of java -> Arraylist<String> array = new Arraylist<>(); -> if we can change it to Arraylist only we can use typedef

/* 
but we can't use it in java as JVM memory allocation is massively different than C++ due to the reason that
this can run C code -> is backward compatible Java on otherhand can add features without worry, but 
C++ developers need to have c to be compatible also
*/

/*
an example for C++ can be 
typedef vector < pair <string> , int >> pairlist

instead of using that big thing to declare variables we can use pairlist to declare variables

*/

int main()
{
    words  user   = "Saber";
    string weapon = "Excalibur";
    // see we can declare variables using both things but to increase readability we use typedef in C++

    cout<< user << " used " << weapon << endl;
    cout<< user << " wins " << endl;

    return 0;
}