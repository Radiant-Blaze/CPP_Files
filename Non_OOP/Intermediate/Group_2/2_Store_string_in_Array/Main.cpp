/**
 * hey so you know we can easily input char or int etc. but string can make our program go boom
 * hence we use getline(cin, variable)
 * just due to string's buffer overflow by \n 
 */

 #include <iostream>
 using namespace std;
 
 int main()
 {
     string temp, arr[100];
     int i;

     for (i = 0; i < 100; i++)
     {
        system("cls");
        cout << "Press q to quit" << endl;
        cout<<"Enter anything's name : ";

        getline(cin,temp);
        if (temp == "q" || temp == "Q")
        {
            break;
        }else
        {
            arr[i] = temp;
        }
        
     }

     for (int j = 0; j < i; j++)
     {
        cout << arr[j] << endl;
     }
     
     
 
     return 0;
 }