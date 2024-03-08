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

    };


};
    
}

