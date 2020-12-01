#include <iostream>

using namespace std;

int main()
{
    char selection {};
    //calculating area inside the loop.  Loop here acts to keep program running as long as the user wishes it
    do {
        double width {}, height {};
        cout << "Enter width and height separated by a space: ";
        cin >> width >> height;

        double area {width * height};
        cout << "The area is " << area << endl;

        cout << "Calculate another? (Y/N) : ";
        cin >> selection;
    } while (selection == 'Y' || selection == 'y');
    cout << "Thanks!" << endl;

    //creating a simple menu program using a do while loop
    char select {};

    do {
        cout << "\n------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Do this" << endl;
        cout << "\nEnter your selection: ";

        cin >> select;

        if (select == '1')
            cout << "You chose 1 so we are doing this." << endl;
        else if (select == '2')
            cout << "You chose 2 so we are doing that." << endl;
        else if (select == '3')
            cout << "You chose 3 so we are doing something new." << endl;
        else if (select == 'Q' || select == 'q')
            cout << "DEUCES!" << endl;
        else
            cout << "Unknown option -- Try again." << endl;
    } while (select != 'q' && select != 'Q');
    return 0;
}
