#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userInput;

    cout << "Enter a string: ";
    getline(cin, userInput);

    if (userInput == "")
        cout << "Empty line";
    else
        cout << userInput;

    cout << endl;

    return 0;
}