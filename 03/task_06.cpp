#include <iostream>

using namespace std;
int main()
{
    unsigned int numb = 1;
    while(numb)
    {
        cout << "Enter an integer: ";
        cin >> numb;
        if (numb != 0)
        {
            unsigned long fact = 1;
            for(int j = numb; j > 0; j--)
            {
                fact *= j;
            }
            cout << "Factorial is: " << fact << endl;
        }
        else
        {
            cout << "Bye!";
        }
        
    }
    return 0;
}