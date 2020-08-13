#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 10;
class fraction
{
protected:
    int top;
    int bottom;
    void lowterms(); // сокращение дроби
public:
    fraction(): top(0), bottom(1)
    {}
    fraction(int t, int b): top(t), bottom(b)
    {}

    void get()
    {
        char temp;
        cin >> top >> temp >> bottom;
        cout << endl;
    }

    void display()
    {
        this->lowterms(); // вызов метода класса внутри метода того же класса
        cout << top << '/' << bottom << endl;
    }

    void add(fraction first, fraction second);
    void sub(fraction first, fraction second);
    void mul(fraction first, fraction second);
    void mul(fraction base, int coeff);
    void div(fraction first, fraction second);
    void div(fraction base, int parts);
};

void fraction::add(fraction first, fraction second)
{
    bottom = first.bottom * second.bottom;
    top = first.top * second.bottom + second.top * first.bottom;
    this->lowterms();
}

void fraction::sub(fraction first, fraction second)
{
    bottom = first.bottom * second.bottom;
    top = first.top * second.bottom - second.top * first.bottom;
    this->lowterms();
}

void fraction::mul(fraction first, fraction second)
{
    bottom = first.bottom * second.bottom;
    top = first.top * second.top;
    this->lowterms();
}

void fraction::mul(fraction base, int coeff)
{
    top = base.top * coeff;
    bottom = base.bottom;
    this->lowterms();
}

void fraction::div(fraction first, fraction second)
{
    bottom = first.bottom * second.top;
    top = first.top * second.bottom;
    this->lowterms();
}

void fraction::div(fraction base, int parts)
{
    top = base.top;
    bottom = base.bottom * parts;
    this->lowterms();
}

void fraction::lowterms()
{
    long ttop, tbottom, temp, gcd;
    ttop = labs(top);
    tbottom = labs(bottom);

    if (tbottom == 0)
    { cout << "Fatal error! Zero div"; exit(1); }
    else if (ttop == 0)
    {
        top = 0; bottom = 1; return;
    }
    // НОД!!
    while (ttop != 0)
    {
        if (ttop < tbottom)
        {
            temp = ttop; ttop = tbottom; tbottom = temp;
        }
        ttop -= tbottom;
    }
    gcd = tbottom;
    top /= gcd;
    bottom /= gcd;
}

int main()
{
    fraction array[MAX];
    fraction total, average;
    int count = 0;
    char ch;
    do
    {
        cout << "Enter fraction: ";
        array[count++].get();
        cout << "Continue? (y/n): ";
        cin >> ch;
    }while((ch != 'n') && (count < MAX));
    for (int j = 0; j < count; j++)
    {
        total.add(total, array[j]);
    }

    cout << "Total: ";
    total.display();
    average.div(total, count); // находим среднее
    cout << "\nAverage: ";
    average.display();
    cout << endl;
    return 0;
}

