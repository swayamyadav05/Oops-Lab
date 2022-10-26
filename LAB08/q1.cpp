// Write a program to overload unary - operator using friend function.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << real << " + i" << imag << endl;
    }
    friend Complex operator-(Complex);
};

Complex operator-(Complex c)
{
    Complex temp;
    temp.real = -c.real;
    temp.imag = -c.imag;
    return temp;
}

int main()
{
    Complex c1(3, 4), c2;
    c2 = -c1;
    c2.display();
    return 0;
}
