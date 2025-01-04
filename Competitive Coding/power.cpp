#include <iostream>
using namespace std;

long power(int x, int n) {
    if (n != 0) {
        return x * power(x, n-1);
    } else {
        return 1;
    }
}

int main() {
    int x = 4, n = 3;
    cout << power(4,3);

    return 0;
}
