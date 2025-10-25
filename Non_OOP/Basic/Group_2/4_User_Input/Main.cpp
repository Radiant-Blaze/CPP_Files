#include <iostream>
using namespace std;


/*

now i will rant for next ~20 lines

man C++ more like garbage in java we can use multiple ways to input data in variables
like scanner.nextint() for integer and scanner.nextline() for String and have no buffer overflow
now here in C++ we will have buffer overflow if we use cin for anything man

like see if i take input for string and have spaces in it it will not take letters after space
hence we have get line which have a long syntax -> getline( cin , variable name)

also this method have it's own drawback like if i got integer input before it then we have
\n in buffer which will not take any input hance we add this in it -> getline(cin >> ws , variable name)

hence java is far superior than C++ in everyway I DON'T CARE WHAT OTHERS SAY
i am only doing C++ because... MY DSA TEACHER SAID SO
do OOP in java in summer do DSA in Java then go in class. Hey i dont care what you learned previously
do OOP in a week then we will go to DSA in C++.

Man my teacher made me hate this language SO MUCH.

ranting over now to implementation

*/

int main()
{

    int     age; 
    string  name;
    
    cout<< "Enter your age : ";
    cin >> age;

    cout<< "Enter your name : ";
    getline(cin >> ws , name);

    cout<< "Hello " << name << " you are " << age << " years old " << endl;

    return 0;
}