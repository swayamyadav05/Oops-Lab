/*
5. From Inheritance including the parameterized constructors in all the classes. Create a class which stores account number, customer name and balance. Derive two classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores minimum balance. The ‘Current’ class stores the over-due amount. Include member functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
          [For current account overdue amount should be calculated.]
-display balance
*/

#include <iostream>
using namespace std;

class Account
{
protected:
    int account_number;
    string customer_name;
    double balance;

public:

    Account(int a, string c, double b)
    {
        account_number = a;
        customer_name = c;
        balance = b;
    }
    void deposit(double amount)
    {
        balance += amount;
    }
    void display()
    {
        cout << "Account number: " << account_number << endl;
        cout << "Customer name: " << customer_name << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Savings : public Account
{
private:
    double minimum_balance;

public:
    Savings(int a, string c, double b, double m) : Account(a, c, b)
    {
        minimum_balance = m;
    }
    void withdraw(double amount)
    {
        if (balance - amount >= minimum_balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }
};

class Current : public Account
{
private:
    double overdue_amount;

public:
    Current(int a, string c, double b, double o) : Account(a, c, b)
    {
        overdue_amount = o;
    }
    void withdraw(double amount)
    {
        if (balance - amount >= overdue_amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }
};

int main()
{
    Savings s(1, "John", 1000, 500);
    Current c(2, "Jane", 1000, 500);
    s.deposit(100);
    c.deposit(100);
    s.withdraw(1000);
    c.withdraw(1000);
    s.display();
    c.display();
    return 0;
}
