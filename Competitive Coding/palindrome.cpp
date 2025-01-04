#include <iostream>
using namespace std;

string revString(string word, int size, int i) {
    if (i == size){
        return "";
    }
    return word[size - i - 1] + revString(word, size, i+1);
}

int main() {
    string word = {};
    cout << "Enter a word: ";
    cin >> word;
    cout << endl;
    int size = word.size();
    string reverse = revString(word, size, 0);
    if (word == reverse) {
        cout << "The word is a palindrome";
    } else {
        cout << "The word is NOT a palindrome";
    }

    return 0;
}