#include <iostream>
#include <string>
#include "urlify.h"
using namespace std;

int main() {
    string url1 = "hello world";
    cout << urlify(url1) + "\n";

    return 0;
}