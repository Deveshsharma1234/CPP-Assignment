// Write a menu driven program to calculate volume of the box(length * width * height).
// Provide necessary constructors.
#include <iostream>
using namespace std;
class Volume
{
private:
    double length;
    double width;
    double height;

public:
    Volume() : length(1), width(1), height(1)
    {
        // using Constructor inilisation list concept
    }
    void volumeFunc()
    {
        cout<<"Enter Details for Volume"<<endl;
        cout<<"Enter Length of the box :"<<endl;
        cin>>length;
        
        cout<<"Enter Width of the box :"<<endl;
        cin>>width;
        
        cout<<"Enter Height of the box :"<<endl;
        cin>>height;
        double volume;
        volume = length * width * height;
        cout << "Total Volume is: " << volume << endl;
        cout << "Thank You, Click on close button " << endl;
    }
    bool menuDriven(){
        int choice;
        cout<<"Enter our choice"<<endl;
        cout<<"Press 1 to calculate volume of the box "<<endl;      
        cout<<"Press 0 to Exit "<<endl;
        // cout<<"Press 1 to calculate volume of the box "<<endl;
        // cout<<"Press 1 to calculate volume of the box "<<endl;
        cin>>choice;
        return choice;
    }
    

};
int main(){
    bool ctch;
    Volume v1;
    ctch = v1.menuDriven();
    if(ctch)
     v1.volumeFunc();
     else
     cout<<"Thank you for using our app"<<endl;
}

