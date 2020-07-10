#include <iostream>

using namespace std;
int main()
{
    // Я знаю, что тут можно было решить быстрее, но я не хочу, мне лень
    int count = 20; // height
    int spaces = 20;
    for (int i = 1; i <= count * 2; i+= 2)
    {
        for (int j = 1; j <= i + spaces; j++)
        {
            if (j <= spaces)
                cout << ' ';
            else
                cout << 'X';
        }
        spaces--;
        cout << endl;
    }
    return 0;
}