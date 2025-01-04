#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int left = 0;
    int right = size - 1;

    while (left <= right){
        int mid = left + ((right - left) / 2); // Avoid overflow

        if (key > arr[mid]){
            left = mid + 1;
        } else if (key < arr[mid]) {
            right = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int arr[] = {-10, -7, -5, -2, 0, 1, 4, 6, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = -8;
    int result = binarySearch(arr, size, key);
    if(result != -1)
        cout << "Element is present at index " << result << endl;
    else
        cout << "Element is not present in array" << endl;
    return 0;
}