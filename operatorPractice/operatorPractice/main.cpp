#include <iostream>

using namespace std;

int main()
{
    //initialization, NOT assignment
    int num1 {10};
    int num2 {20};
    
    int num3 {200};
    int num4 {100};
    
    num1 = 100; //this is assignment
    
    cout << "num1 is: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;
    
    cout << endl;
    
    int result {0};
    
    result = num3 - num4;
    cout << num3 << " + " << num4 << " = " << result << endl;
    
    result = num3 - num4;
    cout << num3 << " - " << num4 << " = " << result << endl;
    
    result = num3 * num4;
    cout << num3 << " * " << num4 << " = " << result << endl;
    
    result = num3 / num4;
    cout << num3 << " / " << num4 << " = " << result << endl;
    
    result = num4 / num3; //showing truncated results...careful here..
    cout << num4 << " / " << num3 << " = " << result << endl;
    
    result = num3 % num4;
    cout << num3 << " % " << num4 << " = " << result << endl;
    
    result = num4 & num3;
    cout << num4 << " % " << num3 << " = " << result << endl;
    
    
    //dollars to duero conversion
    const double usdPerEuro {1.19};
    
    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";
    
    double euros {0.0};
    double dollars {0.0};
    
    cin >> euros;
    dollars = euros * usdPerEuro;
    
    cout << euros << " euros is equivalent to " << dollars << " dollars." << endl;
    
    return 0;
}
