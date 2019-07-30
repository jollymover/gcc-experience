#include <iostream>
#include <string>
#include "palperm.h"
using namespace std;

string palPerm(string str) {
    const int charsetLength = 26;
    int chars[charsetLength] = {};
    string result = "";

    if (str.length() < 2) {
        return "";
    }

    for (int index1 = 0; index1 < str.length(); index1++) {
        if (str[index1] > 64 && str[index1] < 91)  {
            int index2 = str[index1] - 'A';
            chars[index2]++;
        }
        if (str[index1] > 96 && str[index1] < 123)  {
            int index2 = str[index1] - 'a';
            chars[index2]++;
        }
    }

    bool flag = false;
    for (int index = 0; index < charsetLength; index++) {
        if (chars[index] % 2 == 1) {
            if (flag) {
                return "";
            } else {
                flag = true;
            }
        }
    }

    char middleChar = '\0';
    for (int index = 0; index < charsetLength; index++) {
        if (chars[index] == 2) {
            char letter = index + 'a';
            result += letter;
        }

        if (chars[index] == 1) {
            middleChar = index + 'a';
        }
    }

    if (middleChar != '\0') {
        result += middleChar;
    }

    string result2;
    for (int index = result.length() - 1; index >= 0; index--) {
        if (result[index] == middleChar)
            continue;
        result2 += result[index];
    }

    return result + result2;
}