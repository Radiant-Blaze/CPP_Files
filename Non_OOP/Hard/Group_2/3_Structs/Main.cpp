/**
 * It is a type of things which groups multiple dat type within it
 * suppose you have an array, it will only contain a single datatype
 * 
 * but structs can store multiple datatypes within them
 * 
 * for e.g: you make an animal struct
 * 
 * here every animal can have a name (string) , an age (int) and adoption check (bool)
 * 
 * we can access each of their properties by .
 * 
 * e.g:
 * 
 * struct Animal
 * {
 *      string name;
 *      int     age;
 *      bool adopted;
 * };
 * 
 * if we make 
 * Animal Cat;
 * 
 * then we can change them to be
 * Cat.name     = "larry";
 * Cat.age      = 5;
 * Cate.adopted = false;
 * 
 * if we make another one like
 * 
 * Animal Dog; we can also access their members too.
 * 
 * Finally we can say that
 * Struct are a Container where we can store multiple datatypes within them
 */

#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int     age;
    double  salary;
};

int main()
{
    Employee employee_1, employee_2;

    employee_1.name     = "Hatsune Miku";
    employee_1.age      = 16;
    employee_1.salary   = 12000.50;

    employee_2.name     = "Kasane Teto";
    employee_2.age      = 32;
    employee_2.salary   = 25000.25;

    cout << "Employee Name      : " << employee_1.name      << endl;
    cout << "Employee Age       : " << employee_1.age       << endl;
    cout << "Employee Salary    : " << employee_1.salary    << endl;
    cout << endl;

    cout << "Employee Name      : " << employee_2.name      << endl;
    cout << "Employee Age       : " << employee_2.age       << endl;
    cout << "Employee Salary    : " << employee_2.salary    << endl;

    return 0;
}