#include <iostream>
using namespace std;

void linearSearch(int arr[], int len, int item){
    for (int i = 0; i < len; i++) {
        if (arr[i] == item) {
            cout << item << " Found at index " << i;
            return;
        }
    }
    cout << "Not Found";
}

int main() {
    int arr[] = {10, 21, 13, 14, 9, 45};
    int size = sizeof(arr)/sizeof(arr[0]);
    int item = 0;
    cin >> item;

    linearSearch(arr, size, item);

    return 0;
}