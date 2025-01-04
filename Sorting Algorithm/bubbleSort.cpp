#include <iostream>
#include "print_array.h"
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {3, 2, -5, 1, -3, -3, 7, 2, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    printArray(arr, size, 0);

    return 0;
}