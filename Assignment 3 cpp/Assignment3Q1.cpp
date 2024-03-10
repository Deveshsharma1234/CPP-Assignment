/*Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time. 
Allocate the memory for the array and the object dynamically*/
#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default constructor
    Time() : hours(0), minutes(0), seconds(0) {}

    // Parameterized constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Getter functions
    int getHour() const { return hours; }
    int getMinute() const { return minutes; }
    int getSeconds() const { return seconds; }

    // Display time
    void printTime() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Setter functions
    void setHour(int h) { hours = h; }
    void setMinute(int m) { minutes = m; }
    void setSeconds(int s) { seconds = s; }
};

int main() {
    // Dynamic allocation of array of Time objects
    int numObjects;
    cout << "Enter the number of Time objects: ";
    cin >> numObjects;

    Time* timeArray = new Time[numObjects];

    // Accessing and modifying the objects in the array
    for (int i = 0; i < numObjects; ++i) {
        int h, m, s;
        cout << "Enter time (hours minutes seconds) for object " << i + 1 << ": ";
        cin >> h >> m >> s;

        timeArray[i] = Time(h, m, s);
    }

    
    cout << "\nTime objects in the array:\n";
    for (int i = 0; i < numObjects; ++i) {
        cout << "Object " << i + 1 << ": ";
        timeArray[i].printTime();
    }

    
    delete[] timeArray;

    return 0;
}