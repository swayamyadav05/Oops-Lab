// Create a class Fraction to represent a fraction ofthe type 2/5. Overload the 4 arithmetic operators and == to compare two fraction objects.

#include <iostream>
using namespace std;

class Fraction
{
    int num, den;

public:
    Fraction()
    {
        num = 0;
        den = 1;
    }
    Fraction(int n, int d)
    {
        num = n;
        den = d;
    }
    void display()
    {
        cout << num << "/" << den << endl;
    }
    Fraction operator+(Fraction);
    Fraction operator-(Fraction);
    Fraction operator*(Fraction);
    Fraction operator/(Fraction);
    bool operator==(Fraction);
};

Fraction Fraction::operator+(Fraction f)
{
    Fraction temp;
    temp.num = num * f.den + den * f.num;
    temp.den = den * f.den;
    return temp;
}

Fraction Fraction::operator-(Fraction f)
{
    Fraction temp;
    temp.num = num * f.den - den * f.num;
    temp.den = den * f.den;
    return temp;
}

Fraction Fraction::operator*(Fraction f)
{
    Fraction temp;
    temp.num = num * f.num;
    temp.den = den * f.den;
    return temp;
}

Fraction Fraction::operator/(Fraction f)
{
    Fraction temp;
    temp.num = num * f.den;
    temp.den = den * f.num;
    return temp;
}

bool Fraction::operator==(Fraction f)
{
    if (num * f.den == den * f.num)
        return true;
    else
        return false;
}

int main()
{
    Fraction f1(2, 5), f2(2, 5), f3;
    f3 = f1 + f2;
    f3.display();
    f3 = f1 - f2;
    f3.display();
    f3 = f1 * f2;
    f3.display();
    f3 = f1 / f2;
    f3.display();
    if (f1 == f2)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;
}
