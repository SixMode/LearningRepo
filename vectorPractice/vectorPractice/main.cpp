#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <char> firstVowels; //empty
    vector <char> secondVowels (5); //5 initialized to zero
    vector <char> vowels{'a', 'e', 'i', 'o', 'u'};
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
    vector <int> testScores {100, 98, 89};
    
    cout << "\nTest scores using array syntax:" << endl;
    cout << testScores[0] << endl;
    cout << testScores[1] << endl;
    cout << testScores[2] << endl;
    
    cout << "\nTest scores using vector syntax:" << endl;
    
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << "\nThere are " << testScores.size() << " scores in the vector" << endl;
    
    cout << "\nEnter 3 Test Scores: ";
    cin >> testScores.at(0);
    cin >> testScores.at(1);
    cin >> testScores.at(2);
    
    cout << "\nUpdated Test Scores:" << endl;
    
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    
    cout << "\nEnter a score to add:";
    int scoreToAdd {0};
    cin >> scoreToAdd;
    
    testScores.push_back(scoreToAdd);
    
    cout << "\nEnter one more test score:";
    cin >> scoreToAdd;
    
    testScores.push_back(scoreToAdd);
    
    cout << "\nTest scores are now:" << endl;
    
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << testScores.at(3) << endl;
    cout << testScores.at(4) << endl;
    
    cout << "\nThere are now " << testScores.size() << " scores in the vector." << endl;
    
    //2D vector
    vector <vector<int>> movieRatings
    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };
    
    cout <<"\nHere are the movie ratings for the reviewer #1 using array syntax:" << endl;
    cout << movieRatings[0][0] << endl;
    cout << movieRatings[0][1] << endl;
    cout << movieRatings[0][2] << endl;
    cout << movieRatings[0][3] << endl;
    
    cout << "\nHere are the movie ratings for reviewer #2 using vector syntax:" << endl;
    cout << movieRatings[1][0] << endl;
    cout << movieRatings[1][1] << endl;
    cout << movieRatings[1][2] << endl;
    cout << movieRatings[1][3] << endl;
    
    return 0;
}
