#include <iostream>

using namespace std;
int main()
{
    // TODO - Найти более интересное и быстроее решение для нахождение количества лет
    float summ, percent, need;
    int years;
    cout << "Enter initial deposit: ";
    cin >> summ;
    cout << "Enter how much need: ";
    cin >> need;
    cout << "Enter interest rate: ";
    cin >> percent;

    percent /= 100;
    percent += 1;

    years = 0;
    while(need > summ)
    {
        summ *= percent;
        years++;
    }

    cout << "After " << years << " years you will receive: " << need;
    return 0;
}