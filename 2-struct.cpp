// Through structure
/////////////////////////////////////////////// INCORRECT//////////////////////////

#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(Date date)
{
    cout << "Enter day, month, and year: ";
    cin >> date.day >> date.month >> date.year;
}

void printDateOnConsole(Date date)
{
    cout << "Date: " << date.day << "/" << date.month << "/" << date.year << endl;
}

void acceptDateFromConsole(Date date)
{
    initDate(date);
}

bool isLeapYear(Date date)
{
    return (date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0);
}

int main()
{
    struct Date myDate;
    int choice;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Initialize Date\n";
        cout << "2. Print Date\n";
        cout << "3. Accept Date\n";
        cout << "4. Check Leap Year\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            initDate(myDate);
            break;
        case 2:
            printDateOnConsole(myDate);
            break;
        case 3:
            acceptDateFromConsole(myDate);
            break;
        case 4:
            if (isLeapYear(myDate))
            {
                cout << "is non leap year";}
                else
                {
                    cout << "Is leap Year";
                }
            

            break;
        case 5:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice );

    return 0;
}