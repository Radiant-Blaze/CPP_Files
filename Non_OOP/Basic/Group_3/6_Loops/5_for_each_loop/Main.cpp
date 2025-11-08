/**
 * ok so in for each loop we use it to iterate of a iterable data set like arrays
 * we usually use it to ease ourself and to make our code clean.
 * 
 * some disadvantages are:
 * 1) we can't traverse in reverse order
 * 2) we can't skip an element or skip a type of index
 * 3) we need an address operator/ reference (&) to change the element's data
 *      why?
 * because the foreach creates a iterable copy of it and it will change the copy not the original one
 */

 #include <iostream>
 using namespace std;
 
 int main()
 {
     string Groceries[] = {"Milk", "Fih", "tomato", "potato", "onion"};
     
     for(string item : Groceries)
     {
        cout << "Item : " << item << endl;
     }
 
     return 0;
 }