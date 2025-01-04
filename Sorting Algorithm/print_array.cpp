#include <iostream>
using namespace std;

void printArray(int arr[], int size, int i) {
    if (i == size) {
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, size, ++i);
}