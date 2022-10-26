/*
WAP to demonstrate use of pure virtual function and abstract base class.

*/


#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show() = 0;
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Derived d;
    d.show();
    return 0;
}
