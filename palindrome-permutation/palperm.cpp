#include <iostream>
#include <string>
#include "palperm.h"
using namespace std;

string palPerm(string str) {
    // const int charsetLength = 26;
    int chars[CHARSET_LENGTH] = {};
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
    for (int index = 0; index < CHARSET_LENGTH; index++) {
        if (chars[index] % 2 == 1) {
            if (flag) {
                return "";
            } else {
                flag = true;
            }
        }
    }
    return genPalPerm(chars);
}