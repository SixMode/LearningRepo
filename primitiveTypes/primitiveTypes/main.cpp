#include <iostream>
#include <string>

using namespace std;

int main()
{
    //char
    char middleInitial {'E'};
    cout << "My middle initial is " << middleInitial << endl;
    
    //int types
    
    //unsigned short int
    unsigned short int examScore {90};
    cout << "My exam score was " << examScore << endl;
    
    //simple int
    int countriesRepresented {65};
    cout << "There were " << countriesRepresented << " countries represented in my meeting." << endl;
    
    //long int
    long peopleInAlabama {4000000};
    cout << "There are " << peopleInAlabama << " people in Alabama." << endl;
    
    //long long
    long long peopleOnEarth {7000000000};
    cout << "There are " << peopleOnEarth << " people on Earth." << endl;
    
    //floating point types
    
    //float
    float carPayment {501.23};
    cout << "My car payment each month is " << carPayment << endl;
    
    //double
    double pi {3.14159};
    cout << "The value of pi is " << pi << endl;
    
    //bool
    bool gameOver {false};
    cout << "The value of gameOver is " << gameOver << endl;
    
    //how to use sizeof
    
    cout << "int: " << sizeof(int) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "bool: " << sizeof(bool) << endl;
    cout << "double: " << sizeof(double) << endl;
    
    //MAX and MIN values
    cout << "int: " << INT_MAX << endl;
    cout << "double: " << __DBL_MIN__ << endl;
    
    return 0;
}
