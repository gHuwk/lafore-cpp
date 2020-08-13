#include <iostream>
#include <cstring>
using namespace std;

void reversit(char s[])
{
    int len = strlen(s);
    for(int i = 0; i < (len / 2); i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

int main()
{
    char string[20] = "live not on evil";
    reversit(string);
    cout << string;

    char str[20];
    cout << "\nEnter string: ";
    cin.get(str, 20);
    reversit(str);
    cout << str;
    return 0;
}

