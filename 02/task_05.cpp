#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    unsigned char symb = 0;
    cout << "Input symb: ";
    cin >> symb;
    cout << "Is: " << islower(symb) << endl; // 2??
    return 0;
}