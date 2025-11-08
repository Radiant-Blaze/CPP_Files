/**
 * lets say you want to store some data in an array and remember you need to give that data another data
 * by multi dimensional array you can do this
 * 
 * for e.g:
 * 
 * lets take a school it have classes and each classes have students
 * how can we store them in a single array you may ask by using this
 * 
 * string school[number_of_classes][number_of_students(max.)]
 * 
 * hence each row (i) is a class and each (i)(j) is a student
 * where i represent a class no and j represent the student name 
 */

 #include <iostream>
 using namespace std;
 
 int main()
 {
     string school[3][2];
     int rows       = sizeof(school)       / sizeof(school[0]);
     int columns    = sizeof(school[0])    / sizeof(school[0][0]);

     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter the student " << (j + 1) << " of " << (i + 1) << " : " ;
            getline(cin, school[i][j]);
        }
        cout << endl;
     }

     system("cls");

     for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < columns; j++)
        {
            cout << "Student of class " << (i + 1) << " = " << school[i][j] << endl;
        }

        cout << endl;
        
     }
     
 
     return 0;
 }