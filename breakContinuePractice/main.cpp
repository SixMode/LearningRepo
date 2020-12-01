#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> values {1, 2, -1, 3, -1, -99, 7, 8, 10};

    //using a range based for loop to iterate over all vector elements
    //using break to break out of the loop as soon -99 is encountered
    //and to continue on past -1 when encountered.  Once the -99 break
    //is hit we print values.  So this prints 1, 2, 3
    for (auto val: values)
    {
       if (val == -99)
        break;
       else if (val == -1)
        continue;
       else
        cout << val << endl;
    }
    return 0;
}
