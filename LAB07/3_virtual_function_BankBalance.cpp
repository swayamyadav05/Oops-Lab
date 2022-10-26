/*
Create a class which stores account number, customer name and balance. Derive two classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores minimum balance. The ‘Current’ class stores the over-due amount. Include member functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
[For current account overdue amount should be calculated.]
-display balance
Display data from each class using virtual function.
*/

#include <iostream>
using namespace std;

class Account
{
private:
    int accNo;
    char name[20];

public:
    float balance;
    void getdata()
    {
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter balance: ";
        cin >> balance;
    }
    void showdata()
    {
        cout << "Account number: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    virtual void deposit() = 0;
    virtual void withdraw() = 0;
    virtual void displayBalance() = 0;
};

class Savings : public Account
{
private:
    float minBalance;

public:
    void deposit()
    {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
    }
    void withdraw()
    {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (balance - amount < minBalance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
        }
    }
    void displayBalance()
    {
        cout << "Balance: " << balance << endl;
    }
    void getdata()
    {
        Account::getdata();
        cout << "Enter minimum balance: ";
        cin >> minBalance;
    }
    void showdata()
    {
        Account::showdata();
        cout << "Minimum balance: " << minBalance << endl;
    }
};

class Current : public Account
{
private:
    float overDue;

public:
    void deposit()
    {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
    }
    void withdraw()
    {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (balance - amount < overDue)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
        }
    }
    void displayBalance()
    {
        cout << "Balance: " << balance << endl;
    }
    void getdata()
    {
        Account::getdata();
        cout << "Enter over due: ";
        cin >> overDue;
    }
    void showdata()
    {
        Account::showdata();
        cout << "Over due: " << overDue << endl;
    }
};

int main()
{
    Savings s;
    Current c;
    Account *p;
    p = &s;
    p->getdata();
    p->deposit();
    p->withdraw();
    p->displayBalance();
    p = &c;
    p->getdata();
    p->deposit();
    p->withdraw();
    p->displayBalance();
    return 0;
}

