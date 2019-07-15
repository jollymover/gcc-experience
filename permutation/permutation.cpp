#include <iostream>
#include <string>
using namespace std;

bool checkPerm (string w1, string w2) {
    int a = 26;
    int chars[a] = {};
    int i;
    int j;

    if (w1.length() != w2.length())
        return false;

    for (i = 0; i < w1.length(); i++) {
        j = w1[i] - 'a';
        chars[j]++;
    }

    for (i = 0; i < w2.length(); i++) {
        j = w2[i] - 'a';
        chars[j]--;
    }

    for (i = 0; i < a; i++) {
        if (chars[i] > 0)
            return false;
    }

    return true;
}

int main() {
    string word1 = "world";
    string word2 = "wrodl";

    cout << "Word " + word1;
    if (checkPerm(word1, word2))
        cout << " is";
    else
        cout << " is not";
    cout << " a permutation of " + word2 + "\n";

    return 0;
}