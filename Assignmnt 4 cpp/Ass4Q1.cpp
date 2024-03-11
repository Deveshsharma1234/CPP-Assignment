#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    // Cinstructor
    Date() : day(1), month(1), year(2000) {}
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    // Getters
    void getDay()
    {
        cout << "Day = " << day << endl;
    }
    void getMonth()
    {
        cout << "Month = " << month << endl;
    }
    void getYear()
    {
        cout << "Year =" << year << endl;
    }
    // Setters
    void setDay()
    {
        cout << "Enter Day :" << endl;
        cin >> day;
    }
    void setMonth()
    {
        cout << "Enter Month :" << endl;
        cin >> month;
    }
    void setYear()
    {
        cout << "Enter Year :" << endl;
        cin >> year;
    }
    void displayDate()
    {
        cout << "Date :" << day << "/" << month << "/" << year << endl;
    }
    bool checkYear(int year)
    {
        if (year % 400 == 0)
        {
            return true; // Leap year
        }
        else if (year % 100 == 0)
        {
            return false; // Not a leap year
        }
        else if (year % 4 == 0)
        {
            return true; // Leap year
        }
        else
        {
            return false; // Not a leap year
        }
    }
};
class Person
{
private:
    string name;
    string addr;

public:
    Person()
    {
        name = "";
        addr = "";
        Date dob;
    }
    Person(string name, string addr)
    { // check
        this->name = name;
        this->name = addr;
    }
    // Getters
    void getName()
    {
        cout << "Name :" << name;
    }
    void getAddr()
    {
        cout << "Addr :" << addr;
    }
    void display()
    {
    }
    void accept()
    {
    }
};

class Employee
{
private:
    int empid;
    float Salery;
    string Depart;
    Person p1;
    Date doj;

public:
    Employee() : doj()
    {
        empid = 1;
        Salery = 50000;
    }
};
    int main()
    {
    }