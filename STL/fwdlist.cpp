#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list <int> flist;
    flist = {1,2,3,4};
    flist.push_front(10);
    flist.push_front(20);
    
    forward_list <int>::iterator itr;
    for (itr = flist.begin(); itr != flist.end(); ++itr)
    {
        cout << *itr << " ";
    }
    flist.pop_front();
    cout << endl;
    flist.emplace_front(50);
    for (itr = flist.begin(); itr != flist.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
    cout << "Sorting: ";
    flist.sort();
    for (itr = flist.begin(); itr != flist.end(); ++itr)
    {
        cout << *itr << " ";
    }
    
    return 0;
}