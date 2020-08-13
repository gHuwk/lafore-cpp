#include <iostream>

using namespace std;

void starline(int&);
void starline(int);

int main()
{
    int m = 233;
    starline(m); // !!!!!!!! 
    starline(m);
    return 0;
}

void starline(int& m)
{
    for(int j = 0; j < m; j++)
    {
        cout << "*";
    }
    cout << endl;
}

void starline(int m)
{
    for(int j = 0; j < m; j++)
    {
        cout << "*";
    }
    cout << endl;
}