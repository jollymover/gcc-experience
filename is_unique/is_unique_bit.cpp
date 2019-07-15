#include <bitset>
#include <iostream>
using namespace std;

bool debugEnabled = false;

void debug(string variableName, string variableValue) {
    if (debugEnabled)
        cout << "Debug: " + variableName + ": " + variableValue << endl;
}

bool uniqueCharacters(string str) {

    int checker = 0;

    for (int i = 0; i < str.length(); i++) {

        debug("str[i]", to_string(str[i]));
        int bitAtIndex = str[i] - 'a';
        debug("bitAtIndex", to_string(bitAtIndex));

        if ((checker & (1 << bitAtIndex)) > 0) {
            return false;
        }

        checker = checker | (1 << bitAtIndex);
        string binary = bitset<32>(checker).to_string();
        debug("binary", binary);
    }
    return true;
}

int main()
{

    string str = "freedom";

    cout << "The string " << str;
    if (uniqueCharacters(str))
        cout << " has all unique ";
    else
        cout << " has duplicate ";
    cout << "characters\n";
    return 0;
}
