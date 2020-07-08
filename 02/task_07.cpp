#include <iostream>

using namespace std;

int main()
{
    double temperature;
    cout << "C: ";
    cin >> temperature;
    cout << "F: " << temperature * 9 / 5 + 32 << endl;
    return 0;
}