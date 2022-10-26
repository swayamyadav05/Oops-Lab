// Create a class Binary that contains one float data member. Overload the 4 arithmetic operator's.

#include <iostream>
using namespace std;

class Binary
{
    float a;
    
public:
    Binary()
    {
        a = 0;
    }
    Binary(float x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
    Binary operator+(Binary);
    Binary operator-(Binary);
    Binary operator*(Binary);
    Binary operator/(Binary);
};

Binary Binary::operator+(Binary b)
{
    Binary temp;
    temp.a = a + b.a;
    return temp;
}

Binary Binary::operator-(Binary b)
{
    Binary temp;
    temp.a = a - b.a;
    return temp;
}

Binary Binary::operator*(Binary b)
{
    Binary temp;
    temp.a = a * b.a;
    return temp;
}

Binary Binary::operator/(Binary b)
{
    Binary temp;
    temp.a = a / b.a;
    return temp;
}

int main()
{
    Binary b1(3.5), b2(2.5), b3;
    b3 = b1 + b2;
    b3.display();
    b3 = b1 - b2;
    b3.display();
    b3 = b1 * b2;
    b3.display();
    b3 = b1 / b2;
    b3.display();
    return 0;
}
