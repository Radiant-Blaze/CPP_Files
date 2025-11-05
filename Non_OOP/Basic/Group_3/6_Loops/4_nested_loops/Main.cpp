#include <iostream>
using namespace std;

// 2 or more loops in a loop is called a nested loop... what you wanted more than rwrite this syntax in exam

/*

loop(condition)
{
    loop(condition)
    {
        line of code;
    }
}

*/

int main()
{
    int rows, columns;

    cout<< "--------------------------------------------------" <<endl;
    cout<< "-------------------MATRIX MAKER-------------------" <<endl;
    cout<< "--------------------------------------------------" <<endl;
    cout<< "\n";

    cout<< "How much big do you want your matrix to be?";
    cout<< "\n";

    cout<< "Enter Rows      : ";
    cin >> rows;
    cout<< "Enter Columns   : ";
    cin >> columns;
    cout<< "\n";

    for ( int i=0; i < rows; i++)
    {
        for ( int j=0; j < columns; j++)
        {
            if( i == 0 || i == (rows - 1) )             // if i is first or last then | else - for beauty
            {
                if( j == 0 || j == ( columns - 1) )
                {
                    cout<< "| ";
                }else
                {
                    cout << "- ";
                }
            }else
            {
                if( j == 0 || j == ( columns - 1) )     // if i is first or last then + else - for beauty
                {
                    cout<< "| ";
                }else
                {
                    cout << "+ ";
                }
            }
        }

        cout<< "\n";
    }

    return 0;
}