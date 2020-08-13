#include <iostream>

using namespace std;

class angle
{
private:
    int degree;
    float minute;
    char direction;
public:
    angle(): degree(0), minute(0.0), direction('N')
    {}
    angle(int deg, float min, char dir): degree(deg), minute(min), direction(dir)
    {}

    void get();
    void put() const;
};

void angle::get()
{
    // TODO check overflow
    //179*59.9'E
    char temp;
    cin >> degree >> temp >> minute >> temp >> direction;
}

void angle::put() const
{
    cout << degree << '\xF8' << minute << "' " << direction << endl;
}

int main()
{
    angle Taity(17, 31.5, 'S');
    Taity.put();
    cout << "Enter angle: ";
    Taity.get();

    Taity.put();

    return 0;
}

