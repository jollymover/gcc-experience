#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userInput;
    getline(cin, userInput);
    cout << "User input: " << userInput + "\n";
    return 0;
}