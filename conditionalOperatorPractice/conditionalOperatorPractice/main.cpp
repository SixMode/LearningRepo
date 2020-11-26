#include <iostream>

using namespace std;

int main()
{
    int num {};
    
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd" ) << endl;
    
    int num1{}, num2{};
    
    cout << "Enter 2 integers separated by a space: ";
    cin >> num1 >> num2;
    
    if (num1 != num2)
    {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    }
    
    cout << endl;
    return 0;
}
