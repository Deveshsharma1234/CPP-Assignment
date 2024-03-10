#include <iostream>
using namespace std;
class BankAccount
{
private:
    const int accno;
    string name;
    double balance;
    static int generate_accno; // generate accno automatically

public:
    BankAccount() : accno(++generate_accno) {}

    BankAccount(string name, double balance) : accno(++generate_accno)
    {
        this->name = name;
        this->balance = balance;
    }

    void acceptaccountDeatils()
    {
        cout << "Enter name - ";
        cin >> name;
        cout << "Enter initial Balance - ";
        cin >> balance;
    }

    void displayAccountDeatils()
    {
        cout << "Accno = " << accno << endl;
        cout << "Name = " << name << endl;
        cout << "Balanace = " << balance << endl;
    }
};

int BankAccount::generate_accno = 1000;

void menuDriven()
{
     BankAccount *accptr;
    int choice;
    do
    {
        cout << "Enter 0 to Exit: " << endl;
        cout << "Enter 1 to Creaate accout:" << endl;
        cout << "Enter 2 to display Account:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "ThankYou!For using our appplication..." << endl;
            break;
        case 1:
            BankAccount *accptr;
            for (int i = 0; i < 3; i++)
            {
                accptr = new BankAccount;

                accptr->acceptaccountDeatils();
                // accptr->displayAccountDeatils();
                delete accptr;
                accptr = NULL;
            }

            break;
        case 2:
            cout << "Your Bank Balance is :" << endl;
            //  BankAccount *accptr;
    // for (int i = 0; i < 3; i++)
    // {
        // accptr = new BankAccount;

        // accptr->acceptaccountDeatils();
        accptr->displayAccountDeatils();
        // delete accptr;
        // accptr = NULL;
    // }

            break;

        default:
            break;
        }
    } while (choice != 0);
}

int main()
{
    // todo -> do it in menu driven code
    menuDriven();

  
    return 0;
}

