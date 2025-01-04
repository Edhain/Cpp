#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map <string, int> myMap;
    myMap.insert(pair<string, int>("apple", 3));
    myMap.insert(make_pair("banana", 2));
    myMap["cherry"] = 5;
    myMap.insert({"orange", 4});
    cout << myMap.size() << endl;
    map<string, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it)
    {
        cout << it->first << " => " << it->second << endl;
    }


    return 0;
}