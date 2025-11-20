/**
 * just like previously if you want to modify the value of a variable
 * you pass it as a reference
 * 
 * similarly if you want to change the value of the value of the
 * original struct pass it as a reference by using '&' operator
 * 
 * Passing only the value will make teh copy of the struct and
 * use it only when you don't want to change the value
 * (const) keyword recommended more then the previous one
 */

#include <iostream>
using namespace std;

struct Food
{
    string  name;
    double  price;
    bool    available;
};

void print_Details(Food item);
void change_Available(Food &item, bool value);

int main()
{
    Food Biscuit, Cake;
    
    Biscuit.name        = "Black Goliath";
    Biscuit.price       = 2.5;
    Biscuit.available   = 1;

    Cake.name        = "Black Forest";
    Cake.price       = 20;
    Cake.available   = 1;

    change_Available(Cake, 0);

    print_Details(Biscuit);
    print_Details(Cake);



    return 0;
}

void print_Details(Food item)
{
    cout << "Item       : " << item.name << endl;
    cout << "Item Price : " << item.price << endl;
    
    (item.available) ? cout << "Item is Available" << endl : cout << "Item is NOT available" << endl;
    cout << endl;

}

void change_Available(Food &item, bool value)
{
    item.available = value;
}