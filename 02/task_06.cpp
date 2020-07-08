#include <iostream>

using namespace std;

int main()
{
    double dollar;
    cout << "In dollars: ";
    cin >> dollar;
    cout << "Pounds = \t" << dollar / 1.487 << endl
    << "Francs = \t" << dollar / 0.172 << endl
    << "German Mark = \t" << dollar / 0.584 << endl
    << "Japan yen = \t" << dollar / 0.00955 << endl;
    return 0;
}