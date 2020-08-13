#include <iostream>
#include "local.h"
#include "static.h"
using namespace std;
class smallobj
{
private:
    int somedata;
public:
    void setdata(int d){ somedata = d; }
    void showdata(){ cout << "IS: " << somedata << endl; }
};

int main()
{
    local_module();
    static_module();
    smallobj s1, s2;
    s1.setdata(1066);
    s2.setdata(1776);
    s1.showdata();
    s2.showdata();
    return 0;
}



