#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> myList;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        myList.push_back(a);
    }
    myList.push_front(5);
    for (auto i = myList.begin(); i != myList.end(); ++i)
    {
        cout << *i << " ";
    }
    return 0;
}