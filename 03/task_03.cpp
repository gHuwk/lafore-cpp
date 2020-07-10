#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    float number = 0.0;
    char ch;
    cout << "Enter number: ";
    while ((ch = getche()) != '\r')
    {
        if ((ch >= 48) && (ch <= 57))
        {
            ch -= 48;
            number *= 10;
            number += static_cast<float>(ch);
        }
        else
            break;
    }
    cout << endl << "You entered " << number;
    return 0;
}