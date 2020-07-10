#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    const unsigned char WHITE = 219; // white color
    const unsigned char GRAY = 176;  // grey color
    unsigned char uch;
    int all_cells = 80 * 25 - 1;
    for(int count = 0; count < all_cells; count++)
    {
        uch = WHITE;                // maybe prime
        for(int j = 2; j < count; j++)
        if (count % j == 0)         // Not prime number
        {
            uch = GRAY;
            break;
        }
        cout << uch;
    }
    getch();
    return 0;
}