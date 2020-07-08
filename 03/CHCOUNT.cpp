#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int chcount = 0;
    int wdcount = 1;
    char ch;
    cout << "Input string: ";
    while ((ch = getche()) != '\r')
    {
        if (ch == ' ')
        {
            wdcount++;
        }
        else
        {
            chcount++;
        }
    }
    cout << "\nWords: " << wdcount << endl
    << "Symb: " << chcount << endl;
    return 0;
}