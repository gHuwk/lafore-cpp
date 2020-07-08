#include <iostream>

using namespace std;

int main()
{
    float pounds, sheels, pens;
    float new_pens = 0;
    float new_pounds = 0;
    
    cout << "Input pounds: ";
    cin >> pounds;
    cout << endl << "Input sheels: ";
    cin >> sheels;
    cout << endl << "Input pens: ";
    cin >> pens;

    new_pens =  pounds * 240 + sheels * 12 + pens;
    new_pens /= 240;
    cout << "Decimal pounds: J" << new_pens << endl;
    return 0;
}