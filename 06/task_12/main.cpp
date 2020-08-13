#include <iostream>
#include <cmath>
using namespace std;

class fraction
{
protected:
    int top;
    int bottom;
public:
    fraction(): top(0), bottom(1)
    {}
    fraction(int t, int b): top(t), bottom(b)
    {}

    void set()
    {
        char temp;
        cin >> top >> temp >> bottom;
        cout << endl;
    }

    void add(fraction first, fraction second);
    void sub(fraction first, fraction second);
    void mul(fraction first, fraction second);
    void div(fraction first, fraction second);

    void lowterms(); // сокращение дроби


    void display()
    {
        this->lowterms(); // вызов метода класса внутри метода того же класса
        cout << top << '/' << bottom << ' ';
    }
};

void fraction::add(fraction first, fraction second)
{
    bottom = first.bottom;
    bottom *= second.bottom;

    top = first.top * second.bottom;
    top += second.top * first.bottom;
}

void fraction::sub(fraction first, fraction second)
{
    bottom = first.bottom;
    bottom *= second.bottom;
    top = first.top * second.bottom;
    top -= second.top * first.bottom;
}

void fraction::mul(fraction first, fraction second)
{
    bottom = first.bottom * second.bottom;
    top = first.top * second.top;
}

void fraction::div(fraction first, fraction second)
{
    bottom = first.bottom * second.top;
    top = first.top * second.bottom;
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
        ttop = ttop - tbottom;
    }
    gcd = tbottom;
    top = top / gcd;
    bottom = bottom / gcd;

}


int main()
{
    // без массивов!
    fraction d1(1,6);
    fraction d2(1,3);
    fraction d3(1,2);

    // говнокод
    // отвратительно. По логике книги я еще не знаю массивов.
    fraction temp;
    temp.mul(d1, d1); temp.display();
    temp.mul(d1, d2); temp.display();
    temp.mul(d1, d3); temp.display();
    cout << endl;
    temp.mul(d2, d1); temp.display();
    temp.mul(d2, d2); temp.display();
    temp.mul(d2, d3); temp.display();
    cout << endl;
    temp.mul(d3, d1); temp.display();
    temp.mul(d3, d2); temp.display();
    temp.mul(d3, d3); temp.display();
    cout << endl;
    return 0;
}

