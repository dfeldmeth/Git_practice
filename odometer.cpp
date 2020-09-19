#include <iostream>

using namespace std;

// This comment is new
// this is another new comment
class Odometer {
private:
double _miles;
double _mpg;

public:
Odometer () {
_miles=0;
_mpg=0;
}

void trip() {
    _miles=0;
}

void setmpg(double mpg) {
    _mpg=mpg;
}

void milesdriven(double driven) {
    _miles+=driven;
}

double consumed() {
    double gallons=(1/_mpg)*_miles;
    return gallons;
}

void getter () {
  cout<<"Here's the status:"<<endl;
  cout<<"Odometer reading: "<<_miles<<endl;
  cout<<"MPG: "<<_mpg<<endl;
  cout<<endl;
}

};

void menu ();

int main () {
    
    Odometer obj;
    int selection=0;
    double mpg,driven;
    
    while (selection!=6) {
      menu();

      cout<<"Your selection: "<<endl;
      cin>> selection;
        switch (selection) {
            case 1:
                obj.trip();
                break;
            
            case 2:
                cout<<"Enter the efficiency (miles per gallon)"<<endl;
                cin>>mpg;
                obj.setmpg(mpg);
                break;

            case 3:
                cout<<"Enter the # of miles driven"<<endl;
                cin>>driven;
                obj.milesdriven(driven);
                break;

            case 4:
                cout<<"The number of gallons used for the trip is "<<obj.consumed()<<endl;
                break;

            case 5:
                obj.getter();
                break;

            case 6:
                cout<<"End program"<<endl;
                break;

            default:
              cout<<"That is not a valid entry."<<endl;

        }

        
    }

     

}

void menu () {
    cout<<"********************************"<<endl;
    cout<<"************MENU ***************"<<endl;
    cout<<"Chose one of the following:"<<endl;
    cout<<"1) Reset trip"<<endl;
    cout<<"2) Enter efficiency (miles per gallon"<<endl;
    cout<<"3) Enter miles driven"<<endl;
    cout<<"4) Calculate gallons used for the trip"<<endl;
    cout<<"5) Show the odometer and mpg"<<endl;
    cout<<"6) Quit the program"<<endl;
    cout<<"*********************************"<<endl;

}