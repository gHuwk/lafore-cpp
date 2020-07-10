#include <iostream>

using namespace std;

struct point
{
    float x;
    float y;
};

int main()
{
    point first, second, third;
    char dot = '.';
    cout << "Enter first point ( 3 5 ): ";
    cin >> first.x >> first.y;
    cout << "Enter second point ( 7 9 ): ";
    cin >> second.x >> second.y;

    third.x = first.x + second.x;
    third.y = first.y + second.y;

    cout << "Result dot (first + second): " << third.x << ',' << third.y;
    return 0;
}