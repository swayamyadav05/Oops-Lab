/*
Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area of each shape and display it, using virtual function.
*/

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void getdata() = 0;
    virtual void showdata() = 0;
    virtual float area() = 0;
};

class Circle : public Shape
{
private:
    float radius;

public:
    void getdata()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }
    void showdata()
    {
        cout << "Radius: " << radius << endl;
    }
    float area()
    {
        return 3.14 * radius * radius;
    }
};

class Square : public Shape
{
private:
    float side;

public:
    void getdata()
    {
        cout << "Enter side: ";
        cin >> side;
    }
    void showdata()
    {
        cout << "Side: " << side << endl;
    }
    float area()
    {
        return side * side;
    }
};

class Triangle : public Shape
{
private:
    float base, height;

public:
    void getdata()
    {
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
    }
    void showdata()
    {
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
    }
    float area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Shape *s;
    Circle c;
    Square sq;
    Triangle t;
    s = &c;
    s->getdata();
    s->showdata();
    cout << "Area: " << s->area() << endl;
    s = &sq;
    s->getdata();
    s->showdata();
    cout << "Area: " << s->area() << endl;
    s = &t;
    s->getdata();
    s->showdata();
    cout << "Area: " << s->area() << endl;
    return 0;
}
