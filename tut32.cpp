// CONSTRUCTORS WITH DEFAULT ARGUMRNTS IN C++
  
#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata();
};

void Simple::printdata()
{
    cout << "The value of data1, data2 and data3 is " << data1 << " , " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s(1);
    s.printdata();

    return 0;
}