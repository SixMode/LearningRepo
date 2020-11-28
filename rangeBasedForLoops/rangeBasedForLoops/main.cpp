#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    //range based for loop practice examples
    int scores [] {10, 20, 30};
    for (auto score : scores)
        cout << score << endl;
    
    vector<double> temperatures {87.7, 72.5, 91.5, 32.6};
    double averageTemp {};
    double total {};
    
    for(auto temp : temperatures)
        total += temp;
    if (temperatures.size() != 0)
        averageTemp = total /temperatures.size();
    cout << fixed << setprecision(1); //formatting output of average temp
    cout << "Average temperature is: " << averageTemp << endl;
    
    //loop through string
    for (auto c: "Zachary")
        cout << c << " "; //added a space between each char for output clarity
    
    cout << endl;
    
    return 0;
}
