#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    char slash = '/';
    char variant, ch;

    do
    {
        cout << "Enter the expression ( a/b <var> c/d ): ";
        cin >> a >> slash >> b;

        cin >> variant;
        cin >> c >> slash >> d;
        
        switch(variant)
        {
            case '+':
                cout << "Result: " << (a * d + b * c) << slash << b * d << endl; break;
            case '-':
                cout << "Result: " << (a * d - b * c) << slash << b * d << endl; break;
            case '*':
                cout << "Result: " << (a * c) << slash << b * d << endl; break;
            case '/':
                cout << "Result: " << (a * d) << slash << b * c << endl; break;
            default:
                cout << "Result: Unknown" << endl; break;
        }
        
        cout << "Want to continue? (y / n): "; 
        cin >> ch;
    }
    while ( ch != 'n');
    return 0;
}