/*// Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
Instead of char[] use string datatyps*/
#include <iostream>
using namespace std;

class Address
{
private: // Defaut private in Class
    string building;
    string street;
    string city;
    int pinCode;

public:
    Address() // constructor
    {
        pinCode = 326023;
        city = "Jhalawar";
        street = "Tabela Road";
        building = "13th floor";
    }
    void acceptAddress() // accept()function
    {
        cout << "Enter Street Name"
             << endl;
        cin >> street;
        cout << "Enter City Name"
             << endl;
        cin >> city;
        cout << "Enter Building Name "
             << endl;
        cin >> building;
        cout << "Enter pin Name"
             << endl;
        cin >> pinCode;
    }
    void displayAddress() 
    {
        cout << "Address stored is: " << building << "," << street << "," << city << "," << pinCode << endl;
    }
    // Getters//inspector
    int getPincode()
    {
        return this->pinCode;
    }
    string getCity()
    {
        return this->city;
    }
    string getStreet()
    {
        return this->street;
    }
    string getBuilding()
    {
        return this->building;
    }
    // setteres//Mutator
    void setPincode()
    {
        cout << "Enter Pincode" << endl;
        cin >> pinCode;
        this->pinCode = pinCode;
    }
    void setCity()
    {
        cout << "Enter City" << endl;
        cin >> city;
        this->city = city;
    }
    void setStreet()
    {
        cout << "Enter Street" << endl;
        cin >> street;
        this->street = street;
    }
    void setbuilding()
    {
        cout << "Enter Building Name" << endl;
        cin >> building;
        this->building = building;
    }
    // MENU Driven Code
    void menuDriven3()
    {
        int choice;
        do
        {

            cout << "Welcome to the Getters Menu" << endl;
            cout << "Enter 0  to Exit" << endl;
            cout << "Enter 1  to get Pin-Code" << endl;
            cout << "Enter 2  to get City" << endl;
            cout << "Enter 3  to get Street" << endl;
            cout << "Enter 4 to get Building name" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                getPincode();
                break;
            case 2:
                getCity();
                break;
            case 3:
                getStreet();
                break;
            case 4:
                getBuilding();
                break;

            default:
                break;
            }
        } while (choice != 0);
    }

    void menuDriven2()
    {
        int choose;
        do
        {

            cout << "Welcome to the Mutators Menu" << endl;
            cout << "Enter 0  to Exit" << endl;
            cout << "Enter 1  to change Pin-Code" << endl;
            cout << "Enter 2  to change City" << endl;
            cout << "Enter 3  to change Street" << endl;
            cout << "Enter 4 to change Building name" << endl;
            cin >> choose;
            switch (choose)
            {
            case 1:
                setPincode();
                break;
            case 2:
                setCity();
                break;
            case 3:
                setStreet();
                break;
            case 4:
                setbuilding();
                break;

            default:
                break;
            }
        } while (choose != 0);
    }
    void menuDriven()
    {
        int pick;
        do
        {
            cout << "Enter choice from given instruction :" << endl;
            cout << "Enter 1 for Display address :" << endl;
            cout << "Enter 2 for Enter your Address :" << endl;
            cout << "Enter 3 to set diffent Components(like ,pin code etc.):  " << endl;
            cout << "Enter 4 for display/get Different Components(like ,pin code etc.):  " << endl;
            cin >> pick;
            switch (pick)
            {
            case 1:
                displayAddress(); // parameterless constructor wil call
                break;
            case 2:
                acceptAddress();
                break;
            case 3:
                menuDriven2();
                break;
            case 4:
                menuDriven3();

            default:
                break;
            }

        } while (pick != 0);
    }
};
int main()
{
    Address a1;
    a1.menuDriven();
    return 0;
}