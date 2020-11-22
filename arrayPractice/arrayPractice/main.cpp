#include <iostream>

using namespace std;

int main()
{
    int testScores [5] {100, 95, 99, 97, 87};
    
    int highScorePerLevel [10] {5, 4};
    
    int thisArray [] {4, 3, 2, 1};
    
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    
    cout << "First score at index 0: " << testScores[0] << endl;
    cout << "Second score at index 1: " << testScores[1] << endl;
    cout << "Third score at index 2: " << testScores[2] << endl;
    
    cin >> thisArray[0];
    cin >> thisArray[1];
    
    cout << thisArray[0];
    cout << "The first vowel in the alphabet is " << vowels[0] << endl;
    
    //multidimensional arrays
    int movieRating [3][4]; //3 rows, 4 columns, total 12 ints
    
    cin >> movieRating[1][2];
    cin >> movieRating[2][3];
    cout << movieRating[1][2];
    cout << movieRating[2][3];
    return 0;
}
