/*Q3Write a menu driven program for Student in CPP language. Create a class student with data 
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole()*/


 /*Qusstion 3Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside 
// namespace. Test the functionalities.*/
#include <iostream>
using namespace std;

namespace NStudent{
class Student{
    private:
    int rollNum;
    string name;
    double marks;
    public:
    void intitStudent(){
        cout<<"Enter roll Number : "<<endl;
        cin>>rollNum;
        cout<<"Enter Name :"<<endl;
        cin>>name;
        cout<<"Enter Mark's"<<endl;
        cin>>marks;
    }
    void printStudentONConsole(){
        cout<<"Roll Number:"<<rollNum<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;

    }
    void acceptStudentFromConsole(){
        intitStudent();
    }


};
    
}

int main(){
    // using namespace NStudent;
    NStudent::Student S;
    int choose;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Initialize Student\n";
        cout << "2. Print Student Details\n";
        cout << "3. Accept Student Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choose;

        switch (choose)
        {
        case 1:
        S.intitStudent();
            break;
            case 2:
            S.printStudentONConsole();
            break;
            case 3:
            S.acceptStudentFromConsole();
            break;
        
        default:
        cout<<"Invalid Choice"<<endl;
            break;
        }
        
    } while (choose !=4);
    
return 0;
}

