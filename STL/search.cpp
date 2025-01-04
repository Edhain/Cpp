#include <iostream>
#include <vector>
#include <algorithm>

/*
search() function is used to search for an element in a container.
It takes 3 arguments:
1. Iterator to the beginning of the container.
2. Iterator to the end of the container.
3. Element to be searched.
It returns an iterator to the element if found, else it returns the iterator to the end of the container.
Needs array to be sorted.
Based on divide and conquer strategy (binary search).
*/

using namespace std;

int main()
{
    vector<int> v = {9, 2, 4, 11, 6};
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    if(binary_search(v.begin(), v.end(), 4))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}