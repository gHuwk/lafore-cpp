#include <iostream>

using namespace std;

class BasicCounter
{
private:
    int number;
    static int counter;
public:
    BasicCounter(): number(++counter)
    {}

    void put() const
    {
        cout << "Number is: " << number << endl;
        cout << "Count is: " << counter << endl;
    }

    int getNumber() const
    {
        return number;
    }

    int getCounter() const
    {
        return counter;
    }
};

int BasicCounter::counter = 0;

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

class ship
{
protected:
    BasicCounter registration;
    angle latitude;
    angle longitude;
public:
    void get();
    void put() const;
};

void ship::get()
{
    cout << "Enter latitude: ";
    latitude.get();
    cout << "Enter longitude: ";
    longitude.get();
    cout << endl;
}

void ship::put() const
{
    cout << "Number: " << registration.getNumber() << endl;
    cout << "Latitude: "; latitude.put();
    cout << "Longitude: "; longitude.put();
    cout << endl;
}

int main()
{
    ship Titanic;

    Titanic.get();
    Titanic.put();
    return 0;
}

