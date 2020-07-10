#include <iostream>

using namespace std;
int main()
{
    float summ, percent;
    int years;
    cout << "Enter initial deposit: ";
    cin >> summ;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Enter interest rate: ";
    cin >> percent;

    percent /= 100;
    percent += 1;

    for (int i = 1; i <= years; i++)
    {
        summ *= percent;
    }

    cout << "After " << years << " years you will receive: " << summ;
    return 0;
}