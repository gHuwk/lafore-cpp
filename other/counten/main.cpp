#include <iostream>

using namespace std;

class Counter // base class
{
protected:
    unsigned int count;
public:
    Counter(): count (0) // construct
    {}
    Counter( int c ): count (c)
    {}
    unsigned int getCount() const
    { return count; }
    Counter operator++()
    { return Counter (++count); }
};

class CountDn: public Counter // from base class Counter
{
public:
    CountDn(): Counter()
    {}
    CountDn(int c): Counter(c)
    {}

    CountDn operator--() //  Мы тут исплльзум уже CountDn, так как вызывается конструктор CountDn
    { return CountDn (--count);}
};

class CountDnNew: public CountDn
{
public:
    CountDn operator ++()
    {
        cout << "\nINC!";
        return CountDn (++count);
    }
    CountDn operator --()
    {
        cout << "\nDEC!";
        return CountDn (--count);
    }
};

int main()
{
    CountDn c1;
    cout << "\n c1 = " << c1.getCount();
    ++c1, ++c1, ++c1;
    cout << "\n c1 = " << c1.getCount();
    --c1, --c1;
    cout << "\n c1 = " << c1.getCount();


    CountDnNew c2;
    cout << "\n c2 = " << c2.getCount();
    ++c2, ++c2, ++c2;
    cout << "\n c2 = " << c2.getCount();
    --c2, --c2;
    cout << "\n c2 = " << c2.getCount();

    CountDn cDn(100);
    cout << "\n cDn = " << cDn.getCount();
    ++cDn;
    cout << "\n cDn = " << cDn.getCount();
    //CountDn c3 = ++cDn;
    //cout << "\n c3 = " << c3.getCount();
    //cout << endl;
    return 0;
}

