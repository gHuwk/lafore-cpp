#include <iostream>

using namespace std;

class Int
{
private:
    int data;
public:
    Int(): data(0)
    {}
    Int(int d): data(d)
    {}
    int get() const
    {
        return data;
    }
    void display() const
    {
        cout << "Data: " << data;
    }
    void add(Int second)
    {
        data += second.data;
    }
    Int add(Int first, Int second)
    {
        Int temp(first);
        temp.data += first.data;
        temp.data += second.data;
        return temp;
    }
};

int main()
{
    Int one(1);
    Int two(2);
    Int three;

    one.add(two);
    three = one;
    three.display();

    return 0;
}

