#include <iostream>

using namespace std;
int main()
{
    int guests, seats, variants = 1;

    cout << "How many guests: ";
    cin >> guests;
    cout << "How many seats: ";
    cin >> seats;

    for (; seats > 0; seats--, guests--)
    {
        variants *= guests;
    }

    cout << "Result: " << variants;
    return 0;
}