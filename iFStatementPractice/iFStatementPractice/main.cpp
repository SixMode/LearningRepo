#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num {};
    const int min {10};
    const int max {100};
    
    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;
    
    if (num >= 10)
    {
        cout << "\n================== if statement 1 ===================" << endl;
        cout << num << " is greater than " << min << endl;
        
        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }
    
    if (num <= max)
    {
        cout << "\n================== if statement 2 ===================" << endl;
        cout << num << " is less than or equal to " << max << endl;
        
        int diff {max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }
    
    if (num >= min && num <= max)
    {
        cout << "\n================== if statement 3 ===================" << endl;
        cout << num << " is in range " << endl;
        cout << "This means that statements 1 and 2 must also display!!" << endl;
    }
    
    if (num == min || num == max)
    {
        cout << "\n================== if statement 4 ===================" << endl;
        cout << num << " is right on a boundary" << endl;
        cout << "This means all 4 statements display" << endl;
    }
    
    //Practicing if/else statements below
    int score {70};
    
    if (score > 90)
        cout << "A";
    if (score > 80)
        cout << "B";
    if (score > 70)
        cout << "C";
    if (score > 60)
        cout << "D";
    else
        cout << "F";
    
    //nested if statements below
    int testScore {};
    cout << "Enter your score on the exam (0-100): ";
    cin >> testScore;
    char letterGrade {};
    
    if (testScore >= 0 && testScore <= 100)
    {
        if (testScore >= 90)
            letterGrade = 'A';
        else if (testScore >= 80)
            letterGrade = 'B';
        else if (testScore >= 70)
            letterGrade = 'C';
        else if (testScore >= 60)
            letterGrade = 'D';
        else
            letterGrade = 'F';
        cout << "Your grade is " << letterGrade << endl;
        if (letterGrade == 'F')
            cout << "Sorry, you must repeat this class." << endl;
        else
            cout << "Congrats, you passed" << endl;
    }
    else
    {
        cout << "Sorry, " << testScore << " is not in range." << endl;
    }
    
    //nested loops applied to a shipping cost calculator
    int length{}, width{}, height{};
    double baseCost {2.50};
    
    const int tier1Threshold {100};
    const int tier2Threshold {500};
    
    int maxDimensionLength {10};
    
    double tier1Surcharge {0.10};
    double tier2Surcharge {0.25};
 
    //all dimensions must be 10 in or less
    int packageVolume{};
    
    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;
    
    if (length > maxDimensionLength || width > maxDimensionLength || height > maxDimensionLength)
    {
        cout << "Sorry, package rejected.  Dimensions exceeded." << endl;
    }
    else
    {
        double packageCost{};
        packageVolume = length * width * height;
        packageCost = baseCost;
        
        if (packageVolume > tier2Threshold)
        {
            packageCost += packageCost * tier2Surcharge;
        }
        else if (packageVolume > tier1Threshold)
        {
            packageCost += packageCost * tier1Surcharge;
        }
        
        cout << fixed << setprecision(2); //prints dollars nicely
        cout << "The volume of your package is " << packageVolume << endl;
        cout << "Your package will cost $" << packageCost << " to ship." << endl;
    }
    
    cout << endl;
    return 0;
}
