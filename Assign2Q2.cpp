/*// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. 
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money 
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to 
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments 
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called 
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.*/
#include<iostream>
using namespace std;

class TollBooth{

    private:
    unsigned int carpass_with_pay;
    unsigned int carpass_without_pay_;
    double total_amount;
    //  ststic unsigned int cars;
    unsigned int cars;

    public:
    //Constructor to inilitise the cars and total amount to 0
    TollBooth():total_amount(0){
        carpass_with_pay =0;
        carpass_without_pay_=0;
        cars =0;


    }
    void payingCars(){
        cars++;
        carpass_with_pay++;
        this->total_amount = .50+total_amount;
    }
    void noPayCars(){
        carpass_without_pay_++;
        cars++;
    }
    void printOnConsole(){
        cout<<"Total no. of cars passes :"<<cars<<endl;
        cout<<"Total no. of amount Collected :"<<total_amount<<endl;
        cout<<"Total no. of Cars Pass with-out Paying : "<<carpass_without_pay_<<endl;
        cout<<"Total no. of Cars Pass By  Paying 50 cent(.50) is: "<<carpass_with_pay<<endl;
    }



 void menuDriven(){
    int choice;
    do{
    cout<<"Enter Choice by Reading Instructions : -"<<endl;
    cout<<"Enter 1 to for Passing a car By Paying .50 "<<endl;
    cout<<"Enter 2 to for Passing a car with-out Paying .50 "<<endl;
    cout<<"Enter 3 for display Total No. of cars and Paying cars and without paying cars"<<endl;
    cin>>choice;
    
        switch (choice)
        {
        case 1:
        payingCars();
            break;
        case 2:
        noPayCars();
        break;
        case 3:
        printOnConsole();
        default:
            break;
        }


    }while (choice!=0);
};
//  unsigned int TollBooth:: cars ;
    


 };
int main(){
    TollBooth t1;
    t1.menuDriven();
    return 0;

}