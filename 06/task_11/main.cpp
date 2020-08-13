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
        cout << top << '/' << bottom << endl;
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
    fraction first(1,8);
    fraction second(1,4);

    fraction third;

    third.add(first, second);
    cout << "ADD:\n";;
    third.display();

    third.sub(first, second);
    cout << "SUB:\n";
    third.display();

    third.mul(first, second);
    cout << "MUL:\n";
    third.display();

    third.div(first, second);
    cout << "DIV:\n";
    third.display();
    return 0;
}

