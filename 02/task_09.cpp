#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c, d;
    char slash = '/';
    cout << "Input first: ";
    cin >> a >> slash >> b;
    cout << endl << "Input second: ";
    cin >> c >> slash >> d;
    cout << "Result: " << (a * d + b * c) << slash << b * d << endl;
    return 0;
}