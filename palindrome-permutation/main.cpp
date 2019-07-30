#include <iostream>
#include <string>
#include "palperm.h"
using namespace std;

int main()
{
    string str = "tact coa";
    string result = palPerm(str);

    if (result == "")
        cout << "False\n";
    else
        cout << "True (permutations:\"" + result + "\", etc)\n";
    return 0;
}