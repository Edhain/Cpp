#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> s;
    for(int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    for(auto i=s.begin(); i != s.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    s.erase(s.find(5));
    for(auto i=s.begin(); i != s.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}