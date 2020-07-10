#include <iostream>

using namespace std;
int main()
{
    int pounds_1, sheels_1, pens_1;
    int pounds_2, sheels_2, pens_2;
    char ch, brit, dot;

    do
    {
        cout << "Enter first (J5.10.6): ";
        cin >> brit >> pounds_1 >> dot >> sheels_1 >> dot >> pens_1;
        cout << "Enter first (J3.2.6): ";
        cin >> brit >> pounds_2 >> dot >> sheels_2 >> dot >> pens_2;

        pens_1 += pens_2;
        if ( pens_1 > 11)
        {
            sheels_1++;
            pens_1 -= 12;
        }
        sheels_1 += sheels_2;
        if (sheels_1 > 19)
        {
            pounds_1++;
            sheels_1 -= 20;
        }
        pounds_1 += pounds_2;

        cout << "Result: J" << pounds_1 << dot << sheels_1 << dot << pens_1 << endl;
        cout << "Want to continue? (y / n): "; 
        cin >> ch;
    }
    while (ch != 'n');
    return 0;
}