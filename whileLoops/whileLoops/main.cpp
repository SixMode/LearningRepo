#include <iostream>

using namespace std;

int main()
{
    int i {1};
    
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        ++i;
    }
    
    int num{};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;
    
    while (num > 0)
    {
        cout << num << endl;
        --num;
    }
    cout << "Blastoff!" << endl;
    
    //input validation
    int number {};
    cout << "Enter an integer between 0 and 100 inclusive:  ";
    cin >> number;
    
    while (number > 100 || number < 0)
    {
        cout << "Enter an integer between 0 and 100 inclusive: ";
        cin >> number;
    }
    cout << "Good job.  You entered " << number << " and that's valid." << endl;
    
    //flag validation
    bool done {false};
    int flagNum {0};
    
    while (!done)
    {
        cout << "Enter an integer between 1 and 5: ";
        cin >> flagNum;
        if(flagNum <= 1 || flagNum >= 5)
            cout << "Out of range, try again" << endl;
        else
        {
            cout << "Valid" << endl;
            done = true;
        }
    }
    
    return 0;
}
