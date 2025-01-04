#include <iostream>
using namespace std;

void printArray(int arr[], int size, int i) {
    if (i == size) {
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, size, ++i);
}

int main() {
    int arr[5] = {3, 5, 7, 2, 4};

    printArray(arr, 5, 0);

    return 0;
}