#include <iostream>
#include <queue>

/*
In a priority queue, the element with the highest priority is always removed first because the default priority queue is a max heap.
The element with the highest priority is always stored at first index.
The priority queue is implemented using a heap data structure.
Order of remaining elements is not guaranteed.
*/

using namespace std;

int main()
{
    priority_queue<int> p;
    p.push(9);
    p.push(2);
    p.push(4);
    p.push(11);
    p.push(6);
    while (p.size() > 0)
    {
        cout << p.top() << " ";
        p.pop();
    }

    return 0;
}