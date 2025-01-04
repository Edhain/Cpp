#include <iostream>
using namespace std;

void printArrayRev(int arr[], int size, int i) {
    if (i == size) {
        return;
    }
    // printArrayRev(arr, size, i+1);
    // cout << arr[i] << " ";
    cout << arr[size - i - 1] << " ";
    printArrayRev(arr, size, i+1);
}

int main() {
    int arr[] = {3, 5, 7, 2, 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    printArrayRev(arr, size, 0);

    return 0;
}