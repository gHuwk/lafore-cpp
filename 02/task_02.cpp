#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int date = 1990;
    cout << setw(4) << date++ << setw(7) << "135" << endl
    << setw(4) << date++ << setw(7) << "7290" << endl
    << setw(4) << date++ << setw(7) << "11300" << endl
    << setw(4) << date++ << setw(7) << "16200" << endl;
    return 0;
}