#include <iostream>
using namespace std;

class Date {
    int day;
    int month;
    int year;

public:
    
    Date() : day(3), month(7), year(2002) {}


    void initDate() {
        cout << "Enter day, month, and year: ";
        cin >> day >> month >> year;
    }

    void printDateOnConsole()  {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    
   bool isLeapYear()  {
      return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
         
    }
};

int main() {
    Date myDate;
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Initialize Date\n";
        cout << "2. Print Date\n";
        cout << "3. Check Leap Year\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                myDate.initDate();
                break;
            case 2:
                myDate.printDateOnConsole();
                break;
            case 3:

            if (myDate.isLeapYear()){
                cout<<"is not leap year";
            }else
            {
                cout<<"is leap Year";
            }
            
            
            break;
               
            case 4:
            cout << "Exiting program.\n";
                break;
            default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
