#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        while(j >= 0){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } else {
                break;
            }
            j--;
        }
    }
}

void printArray(int arr[], int size, int i) {
    if (i == size) {
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, size, ++i);
}

int main(){
    int arr[] = {3, 2, -5, 1, -3, -3, 7, 2, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    printArray(arr, size, 0);

    return 0;
}