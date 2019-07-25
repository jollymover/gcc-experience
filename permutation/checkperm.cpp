#include <iostream>
#include <string>
#include "permutation.h"
using namespace std;

bool checkPerm (string word1, string word2, int charset_length) {
    int chars[charset_length] = {};

    if (word1.length() != word2.length())
        return false;

    for (int index1 = 0; index1 < word1.length(); index1++) {
        int index2 = word1[index1] - 'a';
        chars[index2]++;
    }

    for (int index1 = 0; index1 < word1.length(); index1++) {
        int index2 = word2[index1] - 'a';
        chars[index2]--;
    }

    for (int index1 = 0; index1 < charset_length; index1++) {
        if (chars[index1] > 0)
            return false;
    }

    return true;
}