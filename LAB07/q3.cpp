/*

Create a class which a complex number. Add two objects and display the resultant object.
Overload the ++ (post and pre) operator for the class.

*/

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void getdata()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> img;
    }
    void showdata()
    {
        cout << "Real part: " << real << endl;
        cout << "Imaginary part: " << img << endl;
    }
    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.real = real + c2.real;
        temp.img = img + c2.img;
        return temp;
    }
    Complex operator++()
    {
        Complex temp;
        temp.real = ++real;
        temp.img = ++img;
        return temp;
    }
    Complex operator++(int)
    {
        Complex temp;
        temp.real = real++;
        temp.img = img++;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3 = c1 + c2;
    c3.showdata();
    c3 = ++c1;
    c3.showdata();
    c3 = c2++;
    c3.showdata();
    return 0;
}

