#include "static.h"

void static_module()
{
    float data = 1, avg;
    while(data != 0)
    {
        cout << "Enter : ";
        cin >> data;
        avg = getavg(data);
        cout << "Average: " << avg << endl;
    }
}

float getavg(float newdata)
{
    static float total = 0;
    static int count = 0;
    count++;
    total += newdata;
    return total/count;
}
