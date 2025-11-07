#include <iostream>
using namespace std;

void    new_Line();
void    greeting(double balance);
void    show_Balance(double balance);
double  withdraw_Cash(double balance);
double  deposit_Cash(double balance);

int main()
{
    greeting(1000);

    return 0;
}

void new_Line() { cout << endl; }

void greeting(double balance)
{
    system("cls");
    bool running = true;
    
    int User_Input;
    cout << "---------------------------------------" << endl;
    cout <<"\tWelcome to your Account" << endl;
    cout << "---------------------------------------" << endl;
    new_Line();

    show_Balance(balance);

    while (running)
    {
        cout << "------------------------"  << endl;
        cout << "\tATM MENU"                << endl;
        cout << "What will You do today?"   << endl;
        cout << "1) Deposit Cash"           << endl;
        cout << "2) Withdraw Cash"          << endl;
        cout << "3) Exit"                   << endl;
        cout << "------------------------"  << endl;

        new_Line();
        cout << "Enter your choice : ";
        cin >> User_Input;
        new_Line();

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "INVALID INPUT!" << endl;
            cout << "Enter Numbers only (no alphabets please!)" << endl;
            continue;
        }

        switch( User_Input )
        {
            case 1 : 
                        balance = deposit_Cash(balance);
                        show_Balance(balance);
                        break;

            case 2 :    
                        balance = withdraw_Cash(balance);
                        show_Balance(balance);
                        break;

            case 3 : 
                        cout << "Exiting..." << endl;
                        running = false;
                        break;

            default:
                        new_Line();
                        cout << "Wrong choice! Enter again!" << endl;
                        break;
        }
    }
    
    
}

void show_Balance(double balance)   { cout << "Your Balance is ***** " << balance << "$ *****" << endl; }

double withdraw_Cash(double balance)
{
    double user_Input, changed_Balance;
    new_Line();

    cout << "What amount of balance do you need to withdraw?" << endl;
    cout << "Enter the amount : ";
    cin >> user_Input;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "INVALID INPUT!" << endl;
        cout << "Enter Numbers only (no alphabets please!)" << endl;
        return balance;
    }

    if (user_Input > balance)
    {
        cout << "you can't withdraw more than" << balance << endl;
        new_Line();
        return balance;
    }
    
    cout << "Transaction Successful!" << endl;
    changed_Balance = balance - user_Input;
    new_Line();

    return changed_Balance;

}

double deposit_Cash(double balance)
{
    double user_Input, changed_Balance;
    new_Line();

    cout << "What amount of balance do you need to deposit?" << endl;
    cout << "Enter the amount : ";
    cin >> user_Input;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "INVALID INPUT!" << endl;
        cout << "Enter Numbers only (no alphabets please!)" << endl;
        return balance;
    }

    if (user_Input <= 0)
    {
        cout << "Negative numbers not allowed!" << endl;
        new_Line();
        return balance;
    }

    cout << "Transaction Successful!" << endl;
    changed_Balance = balance + user_Input;
    new_Line();

    return changed_Balance;
}