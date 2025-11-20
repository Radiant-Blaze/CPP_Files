#include <iostream>
using namespace std;

int main()
{
    const int No_Of_Question = 5;
    const int No_Of_Options  = 4;

    string Questions[No_Of_Question] = 
    {
        "1. What is the smallest planet in the solar system?",
        "2. Who is considered the father of modern computing?",
        "3. there are _____ wonders of the world",
        "4. Is yotsuba the best girl in TQQ?",
        "5. Universe is _____"
    };

    string Options[No_Of_Question][No_Of_Options] = 
    {
        {
            "a. Mercury",
            "b. Venus",
            "c. Earth",
            "d. Mars"
        },

        {
            "a. Charles Babbage",
            "b. Nikola Tesla",
            "c. Qin Shi Huang",
            "d. Marie Curie"
        },

        {
            "a. 8",
            "b. 7",
            "c. 6",
            "d. 10"

        },

        {
            "a. no",
            "b. maybe",
            "c. yes",
            "d. none of the above"
        },

        {
            "a. Expanding",
            "b. Shrinking",
            "c. Decomposing",
            "d. None of the above"
        }
    };

    char Answers[No_Of_Question] = { 'a', 'a', 'b', 'c', 'a' };

    char Choice;
    int Correct = 0;

    system("cls");

    for (int i = 0; i < No_Of_Question; i++)
    {
        cout << endl;
        cout << Questions[i] << endl;
        cout << endl;

        for (int j = 0; j < No_Of_Options; j++)
        {
            cout << Options[i][j] << endl;
        }

        cout << endl;
        cout << "Enter YOur Choice : ";
        cin >> Choice;

        if (Choice == Answers[i])
        {
            cout << endl;
            cout << "Correct Answer!" << endl;
            Correct++;
        }else
        {
            cout << endl;
            cout << "Wrong Answer!" << endl;
        }
        
    }

    cout << "You scored         : " << Correct << "/" << No_Of_Question << endl;
    cout << "Total Percentage   : " << ( ( (double) Correct/ (double) No_Of_Question) * 100 ) << "%" << endl;
    
    

    return 0;
}