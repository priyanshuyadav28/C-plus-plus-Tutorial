// SINGLE INHERITENCE IN C++
#include <iostream>
using namespace std;

class Base
{
    int data1; //PRIVATE BY DEFAULT AND NOT INHERITABLE
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getdata1()
{
    return data1;
}

int Base ::getdata2()
{
    return data2;
}

class Derived : public Base
{ //CLASS IS BEING DERIVED PUBLICALLY
    int data3;

public:
    void Process();
    void Display();
};

void Derived ::Process()
{
    data3 = data2 * getdata1();
}

void Derived ::Display()
{
    cout << "Value of data1 is " << getdata1() << endl;
    cout << "Value of data2 is " << data2 << endl;
    cout << "Value of data3 is " << data3 << endl;
}

int main()
{
    Derived der;
    der.setdata();
    der.Process();
    der.Display();

    return 0;
}