#include <iostream>
using namespace std;

int main()
{
    int i1 = 5;
    int i2 = 5;
    int *p1 = &i1;
    int *p2 = &i2;

    cout << p1 << endl;
    cout << p2 << endl;

    return 0;
}