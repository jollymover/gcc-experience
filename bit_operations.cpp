#include <bits/stdc++.h>
#include <bitset>
#include <iostream>
using namespace std;

int main () {
    int checker = 0;

    checker = checker | (1 << 1);
    string binary = bitset<32>(checker).to_string(); //to binary
    cout << "Debug: binary = " << binary << endl;

    return 0;
}