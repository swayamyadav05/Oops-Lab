/*
Create a class which stores employee name,id and salary Derive two classes from ‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour. Calculate the salary of a regular employee and a par-time employee, using virtual function.

*/

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    char name[20];
    float salary;

public:
    void getdata()
    {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void showdata()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
    virtual void salaryInput() = 0;
};

class Regular : public Employee
{
private:
    float da, hra, basic;

public:
    void salaryInput()
    {
        cout << "Enter DA: ";
        cin >> da;
        cout << "Enter HRA: ";
        cin >> hra;
        cout << "Enter basic: ";
        cin >> basic;
    }
    void showdata()
    {
        Employee::showdata();
        cout << "DA: " << da << endl;
        cout << "HRA: " << hra << endl;
        cout << "Basic: " << basic << endl;
    }
    float salary()
    {
        return da + hra + basic;
    }
};

class PartTime : public Employee
{
private:
    float hours, pay;
    
public:
    void salaryInput()
    {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter pay: ";
        cin >> pay;
    }
    void showdata()
    {
        Employee::showdata();
        cout << "Hours: " << hours << endl;
        cout << "Pay: " << pay << endl;
    }
    float salary()
    {
        return hours * pay;
    }
};

int main()
{
    Regular r;
    PartTime p;
    r.getdata();
    r.salaryInput();
    p.getdata();
    p.salaryInput();
    r.showdata();
    cout << "Salary: " << r.salary() << endl;
    p.showdata();
    cout << "Salary: " << p.salary() << endl;
    return 0;
}
