#include <iostream>

using namespace std;

int main()
{
    bool equalResult {false};
    bool notEqualResult {false};
    
    int num1{}, num2{};
    
    cout << boolalpha; //will display true/false instead of 1/0 for bool
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equalResult = (num1 == num2);
    notEqualResult = (num1 != num2);
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " << notEqualResult << endl;
    
    char char1{}, char2{};
    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;
    equalResult = (char1 == char2);
    notEqualResult = (char1 != char2);
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " << notEqualResult << endl;
    
    return 0;
}
