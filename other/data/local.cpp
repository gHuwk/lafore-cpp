#include "local.h"

void repchar(char ch, int n)
{
    for(int i = 0; i < n; i++) cout << ch;
    cout << endl;
}

void local_module()
{
    repchar();
    repchar('=');
    repchar('+', 30);
}
