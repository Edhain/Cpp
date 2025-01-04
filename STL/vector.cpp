#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    // for(int i=0; i<5; i++)
    // {
    //     int t;
    //     cin >> t;
    //     v.push_back(t); // insert element in vector
    // }

    v = {4,5,6,7,8};

    v.push_back(2);

    cout << "The vector is: ";
    for(int i =0; i<v.size(); i++) // size() return size of vector
    {
        cout << v[i]; //access element of vector
    }
    cout << endl;
    v.pop_back(); // delete.remove last element
    cout << "The vector after pop_back is: ";
    for(int i =0; i<v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
    v.clear();
    // checking whether vector is empty or not
    if(v.empty())
    {
        cout<<"vector is empty";
    }
    else
    {
        cout<<"vector is not empty";
    }


    return 0;
}