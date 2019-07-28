#include <iostream>
#include <string>
#include "urlify.h"
using namespace std;

string urlify(string url) {
    string result = "";
    bool notEmpty = false;
    for (int index = url.length() - 1; index >= 0; index --) {
        if (url[index] == ' ') {
            if(notEmpty)
                result = "%20" + result;
        } else {
            string letter (1, url[index]);
            result = letter + result;
            notEmpty = true;
        }
    }
    return result;
}