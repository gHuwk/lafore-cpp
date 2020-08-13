#include <iostream>

using namespace std;

void starline();

int main()
{
    starline();
    cout << "Type        Range" << endl;
    starline();
    cout << "Char      -128...127" << endl
    << "Short    -32,768...32,767" << endl
    << "Int     System based" << endl
    << "Long    -2,147,483,648...2,147,483,647" << endl;
    starline();
    return 0;
}

void starline()
{
    for(int j = 0; j < 45; j++)
    {
        cout << "*";
    }
    cout << endl;
}