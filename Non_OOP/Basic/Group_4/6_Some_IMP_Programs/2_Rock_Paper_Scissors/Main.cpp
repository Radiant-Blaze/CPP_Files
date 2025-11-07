#include <iostream>
#include <random>
using namespace std;

void    new_Line();
void    greeting();
void    working();
char    calculate_computer_choice();

int main()
{
    greeting();

    return 0;
}

void new_Line() { cout << endl; }

void greeting()
{

    system("cls");
    cout << "---------------------------------------------" << endl;
    cout << "\tEPIC ROCK PAPER SCISSORS GAME" << endl;
    cout << "---------------------------------------------" << endl;
    new_Line();
    cout << "Welcome now we will start the game" << endl;

    working();

    cout << "---------------------------------------------" << endl;
}

void working()
{
    int user_win = 0, comp_win = 0, games_Played = 0, draw = 0;
    char user_choice, comp_choice;
    bool running = true;

    while (running)
    {
        cout << "Total games played         : "      << games_Played << endl;
        new_Line();

        cout << "Total games user won       : "      << user_win     << endl;
        cout << "Total games computer won   : "      << comp_win     << endl;
        cout << "Total draws                : "     << draw         << endl;  
        new_Line();

        cout << "Rock       = r"       << endl;
        cout << "Paper      = p"      << endl;
        cout << "Scissors   = s"   << endl;
        cout << "Enter your choice : " ;
        cin >> user_choice;

        if (user_choice != 'r' && user_choice != 'p' && user_choice != 's')
        {
            system("cls");
            new_Line();
            cout << "SORRY PLEASE USE SMALL LETTERS!!!" << endl;
            continue;
        }
        

        comp_choice = calculate_computer_choice();

        switch( user_choice )
        {
            case 'r': 	
            
            if(comp_choice == 'r')          { cout << "It's a tie!" ; draw++;       }
			else if(comp_choice == 'p')     { cout << "You lose!"   ; comp_win++;   }
            else                            { cout << "You win!"    ; user_win++;   }
			break;
            
            case 'p': 	
            
                if(comp_choice == 'r')              { cout << "You win!"    ; user_win++;   }
                else if(comp_choice == 'p')         { cout << "It's a tie!" ; draw++;       }
                else                                { cout << "You lose!\n" ; comp_win++;   }
                break;

            case 's': 	
            
                if(comp_choice == 'r')              { cout << "You lose!"       ; comp_win++;   }
                else if(comp_choice == 'p')         { cout << "You win!"        ; user_win++;   }
                else                                { cout << "It's a tie!\n"   ; draw++;       }
                break;
            
        }
        new_Line();
        games_Played++;
        
        if (user_win == 3 || comp_win == 3)
        {
            system("cls");

            if (user_win == 3)
            {
                cout << "YOU WIN THE TOURNAMENT!"   << endl;
                cout << "Total wins  " << user_win  << endl;
                cout << "Total loses " << comp_win  << endl;
                cout << "Total draws " << draw      << endl;

            }else
            {
                cout << "YOU LOSE THE TOURNAMENT!" << endl;
                cout << "Total wins  " << user_win  << endl;
                cout << "Total loses " << comp_win  << endl;
                cout << "Total draws " << draw      << endl;
            }

            running = false;
            break;
        }

        system("cls");
        
    }
    

}

char calculate_computer_choice()
{
    random_device seed;
    mt19937_64 generator(seed());

    uniform_int_distribution<> table(1,3);

    int number = table(generator);

    switch( number )
    {
        case 1 : return 'r'; break;
        case 2 : return 'p'; break;
        case 3 : return 's'; break;
        default: return -1 ; break;
    }
}
