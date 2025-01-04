#include <iostream>
#include <stack>

/*
Stack is a LIFO data structure.
Elements are inserted and removed from the same end.
Some functions:
top(): Returns the top element of the stack.
size(): Returns the number of elements in the stack.
push(): Adds an element to the top of the stack.
pop(): Removes the top element of the stack.
empty(): Returns true if the stack is empty, else returns false.
*/

using namespace std;

int main()
{
    stack<int> s;
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        s.push(a);
    }
    s.push(6);
    while(s.size() > 0)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    cout << "Size of stack: " << s.size() << endl;


    return 0;
}