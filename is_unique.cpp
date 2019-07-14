#include <iostream>
#include <string>
using namespace std;

int main()
{
    string myString;
    int p1;
    int p2;

    cout << "Enter a string: \n";
    getline(cin, myString);

    p1 = 0;
    for (char c1 : myString) {
        // cout << c1 << endl;
        p2 = 0;
        for (char c2 : myString) {
            if (p2 > p1) {
                if (c2 == c1) {
                    cout << "Character " << c1 << " is not unique\n";
                    return 1;
                }
            }
            p2++;
        }
        p1++;
    }

    cout << "All the characters are unique\n";
    return 0;
}