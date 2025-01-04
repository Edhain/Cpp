#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int i, int val) {
    if (i == size) {
        return -1;
    }
    if (arr[i] == val) {
        return i;
    }
    
    return firstOccurence(arr, size, i+1, val);
}

int main() {
    int arr[] = {3, 5, 7, 2, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = 0;
    cout << "Enter a number: ";
    cin >> val;

    int index = firstOccurence(arr, size, 0, val);
    
    if (index != -1) {
        cout << "The value " << val << " is found at index " << index << "." << endl;
    } else {
        cout << "The value " << val << " is not in the array." << endl;
    }

    return 0;
}