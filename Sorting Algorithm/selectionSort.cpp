#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int min_index = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min_index])
                min_index = j;
        }
        int temp = arr[min_index]; // we can use swap function from 
        arr[min_index] = arr[i];   // <algorith> header with the code
        arr[i] = temp;             // swap(arr[min_index], arr[i])
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
    selectionSort(arr,size);
    printArray(arr, size, 0);

    return 0;
}