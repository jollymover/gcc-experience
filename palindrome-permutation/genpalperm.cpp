#include <iostream>
#include <string>
#include "palperm.h"
using namespace std;

string genPalPerm(int chars[]) {
    string result1;
    char middleChar = '\0';
    for (int index = 0; index < CHARSET_LENGTH; index++) {
        if (chars[index] == 2) {
            char letter = index + 'a';
            result1 += letter;
        }

        if (chars[index] == 1) {
            middleChar = index + 'a';
        }
    }

    if (middleChar != '\0') {
        result1 += middleChar;
    }

    string result2;
    for (int index = result1.length() - 1; index >= 0; index--) {
        if (result1[index] == middleChar)
            continue;
        result2 += result1[index];
    }
    return result1 + result2;
}