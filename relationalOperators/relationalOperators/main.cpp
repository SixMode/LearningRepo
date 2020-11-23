#include <iostream>

using namespace std;

int main()
{
    int num1{}, num2{};
    
    cout << boolalpha;
    cout << "Enter 2 integers separated by a space: ";
    cin >> num1 >> num2;
    
    cout << num1 << " > " << num2 << ":" << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << ":" << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << ":" << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << ":" << (num1 <= num2) << endl;
    

    //Logical Operators
    int num {};
    const int lower {10};
    const int upper {20};
    
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ":";
    cin >> num;
    
    bool withinBounds {false};
    
    withinBounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << ": " << withinBounds << endl;
    
    return 0;
}
