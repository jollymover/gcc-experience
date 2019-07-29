#include <iostream>
#include <string>
#include "permutation.h"
using namespace std;

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