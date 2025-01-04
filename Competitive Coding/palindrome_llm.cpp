#include <iostream>
using namespace std;

string revString(string word, int size, int i) {
    if (i == size) {
        return "";
    }
    return word[size - i - 1] + revString(word, size, i + 1);
}

bool isPalindrome(string word) {
    int size = word.size();
    string reverse = revString(word, size, 0);
    return word == reverse;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    cout << endl;

    bool result = isPalindrome(word);
    cout << (result ? "true" : "false") << endl;

    return 0;
}