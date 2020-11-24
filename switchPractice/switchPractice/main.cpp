#include <iostream>

using namespace std;

int main()
{
    char letterGrade {};
    
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letterGrade;
    
    switch(letterGrade)
    {
        case 'a':
        case 'A':
            cout << "You need a 90 or above, study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need an 80-89, go study!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need a 70-79 for an average grade." << endl;
            break;
        case 'd':
        case 'D':
            cout << "You should strive for a better grade, you need 60-69" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm{};
            cout << "Are you sure (Y/N)?";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
                cout << "Ok, I guess you didn't study..." << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Good, go study." << endl;
            else
                cout << "illegal choice." << endl;
            break;
        }
        default:
            cout << "Sorry, that is not a valid grade." << endl;
    }
    
    cout << endl;
    return 0;
}
