#include <iostream>

using namespace std;
const int MAX = 100;
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0.0)
    {}
    Distance(int ft, float in): feet(ft), inches(in)
    {}
    void getdist()
    {
        cout << "\nEnter feets: "; cin >> feet;
        cout << "\nEnter inches: "; cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'-" << inches << '\"';
    }
    void add_dist(Distance, Distance);
    void div_dist(Distance, int);
};

void Distance::add_dist(Distance d2, Distance d3)
{
    inches = d2.inches + d3.inches;
    feet = 0;
    if (inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    feet += d2.feet + d3.feet;
}

void Distance::div_dist(Distance d2, int divisor)
{
    float fltfeet = d2.feet + d2.inches / 12.0;
    fltfeet /= divisor;
    feet = static_cast<int>(fltfeet);
    inches = (fltfeet - feet) * 12;
}

int main()
{
    Distance array[MAX];

    Distance total, average;

    int count = 0;
    char ch;
    do
    {
        cout << "Enter distance: ";
        array[count++].getdist();
        cout << "Continue? (y/n): ";
        cin >> ch;
    }while((ch != 'n') && (count < MAX));
    for (int j = 0; j < count; j++)
    {
        total.add_dist(total, array[j]);
    }

    average.div_dist(total, count); // находим среднее
    cout << "\nAverage: ";
    average.showdist();
    cout << endl;
    return 0;
}

