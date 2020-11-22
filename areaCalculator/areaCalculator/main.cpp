#include <iostream>

int main()
{
    std::cout << "Enter the width of the room: ";
    int roomWidth {0};
    std::cin >> roomWidth;
    std::cout << "Enter the length of the room: ";
    int roomLength {0};
    std::cin >> roomLength;
    
    std::cout << "The area of the room is " << roomWidth * roomLength << " sqaure feet" << std::endl;
    
    return 0;
}
