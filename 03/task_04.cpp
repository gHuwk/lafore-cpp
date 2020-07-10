#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    double first, second, answer;

    char variant, ch;
    do
    {
        cout << "Enter the expression: operand, operation, operand: ";
        cin >> first >> variant >> second;
        switch(variant)
        {
            case '+':   answer = first + second; break;
            case '-':   answer = first - second; break;
            case '*':   answer = first * second; break;
            case '/':   answer = first / second; break;
            default:    answer = 0; break;
        }
        cout << "Result: " << answer << endl;
        cout << "Want to continue? (y / n): "; 
        cin >> ch;
    }
    while ( ch != 'n');
    return 0;
}