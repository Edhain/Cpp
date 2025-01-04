#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int,5> arr;

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    arr = {1,2,3,4,5};

    for (int i =0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    cout << arr[3] << endl;

    cout << arr.size() << endl;

    cout << arr.front() << endl;

    cout << arr.back() << endl;

    arr.fill(5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    array <int,5> arr2;
    arr = {1,2,3,4,5};
    arr2 = {6,7,8,9,10};

    arr.swap(arr2);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}