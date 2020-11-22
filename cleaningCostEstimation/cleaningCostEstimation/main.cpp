#include <iostream>

using namespace std;

int main()
{
    double smallRoom {25.00};
    double largeRoom {35.00};
    double salesTax {.06};
    
    cout << "How many small rooms do you need cleaned? ";
    int smallRoomsNum;
    cin >> smallRoomsNum;
    cout << "How many large rooms do you need cleaned? ";
    int largeRoomsNum;
    cin >> largeRoomsNum;
    
    double smallRoomCost = smallRoomsNum * smallRoom;
    double largeRoomCost = largeRoomsNum * largeRoom;
    double totalTax = (smallRoomCost + largeRoomCost) * salesTax;
    
    double totalCost = smallRoomCost + largeRoomCost + salesTax;
    
    cout << "Your total bill will be " << totalCost << ".  This price is valid for 30 days.";
    
    return 0;
}
