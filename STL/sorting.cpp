#include <iostream>
#include <vector>
#include <algorithm>

/*
The time complexity of the sort function is O(nlogn).
The sort function is used to sort the elements of a container in ascending order.
*/

using namespace std;

int main()
{
    vector<int> v = {9, 2, 4, 11, 6};
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}