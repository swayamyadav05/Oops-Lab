/* 
4. Create a class student which stores name, roll number and age of a student. Derive a class test from student class, which stores marks in 5 subjects. Input and display the details of a student of inheritance to include a class sports, which stores the marks in sports activity. Derive the result class from the classes ‘test’ and ‘sports’. Create objects using parameterized constructors .Calculate the total marks and percentage of a student.
*/ 

#include <iostream>
using namespace std;

class student
{
public:
    char name[20];
    int roll;
    int age;
};

class test : public student
{
public:
    int marks[5];
    void getdata()
    {
        cout << "Enter name, roll number and age of the student: ";
        cin >> name >> roll >> age;
        cout << "Enter marks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
        cout << "Age: " << age << endl;
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class sports
{
public:
    int smarks;
    void getdata()
    {
        cout << "Enter marks in sports: ";
        cin >> smarks;
    }
    void display()
    {
        cout << "Marks in sports: " << smarks << endl;
    }
};

class result : public test, public sports
{
public:
    int total;
    float percentage;
    void getdata()
    {
        test::getdata();
        sports::getdata();
    }
    void display()
    {
        test::display();
        sports::display();
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        total += smarks;
        percentage = (float)total / 6;
        cout << "Total marks: " << total << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

int main()
{
    result r;
    r.getdata();
    r.display();
    return 0;
}
