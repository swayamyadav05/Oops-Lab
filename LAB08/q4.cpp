/*
Consider a class Matrix

class Matrix
{
    int a[3][3];
    public:
    //methods;
};

Overload the -(Unary) should negate the numbers stored in the object.
*/

#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3];

public:
    Matrix()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = 0;
            }
        }
    }
    Matrix(int x)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = x;
            }
        }
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator-()
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.a[i][j] = -a[i][j];
            }
        }
        return temp;
    }
};

int main()
{
    Matrix m1(5), m2;
    m2 = -m1;
    m2.display();
    return 0;
}
