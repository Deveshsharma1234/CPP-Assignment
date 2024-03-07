#include<iostream>
#include<string>
using namespace std;
 
 class Student{
    int rollNo;
    string name;
    float marks;

    public:
    void initStudent(){
        cout<<"Enter Roll Number";
        cin >> rollNo;
        cout<<"Enter Name:";
        cin>> name;
        cout<<"Enter Marks:";
         cin>> marks;
    }

    void printStudentOnConsole(){
        cout<<"Roll Number:"<<rollNo<<"\n";
        cout<<"Name: "<< name<<"\n";
        cout<<"Marls:"<<marks<<endl;
    }
    void acceptStudentFromConsole(){
        initStudent();
    }

};
int main(){
    Student S;
    int choose;

    do {
        cout << "\nMenu:\n";
        cout << "1. Initialize Student\n";
        cout << "2. Print Student Details\n";
        cout << "3. Accept Student Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choose;

        switch (choose) {
            case 1:
                S.initStudent();
                break;
            case 2:
                S.printStudentOnConsole();
                break;
            case 3:
                S.acceptStudentFromConsole();
                break;
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choose != 4);

    return 0;
}

