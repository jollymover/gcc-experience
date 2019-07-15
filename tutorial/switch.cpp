#include <iostream>
using namespace std;

int main()
{
    int x = 1;

    switch (x) {
        case 1:
            cout << "Start\n";
            break;
        case 2:
            cout << "Stop\n";
            break;
        default:
            cout << "Check parameters";
    }

    return 0;
}