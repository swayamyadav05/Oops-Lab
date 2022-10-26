/*

2. WAP to find the average of the private data members of two different classes using friend function.

*/

#include <iostream>
using namespace std;

class B;
class A
{
private:
    float num1;

public:
    A()
    {
        cout << "Enter the value of num1: ";
        cin >> num1;
    }
    void show()
    {
        cout << "\n Value of Number 1 : " << num1;
    }
    friend void average(A *num1, B *num2);
};
class B
{
private:
    float num2;

public:
    B()
    {
        cout << "Enter the value of num2: ";
        cin >> num2;
    }
    void show()
    {
        cout << "\n Value of Number 2 : " << num2;
    }
    friend void average(A *num1, B *num2);
};

void average(A *no1, B *no2)
{
    float no3;
    no3 = (no1->num1 + no2->num2) / 2;
    cout << "Average of the two numbers is: " << no3 << endl;
}

int main()
{
    A b;
    B d;
    average(&b, &d);
    return 0;
}