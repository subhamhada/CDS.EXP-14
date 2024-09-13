//subham
//entc B2
//23070123132
//experiment 14
#include <iostream>
#include <string>
using namespace std;

//base class
class Vehicle {
    public:
    void fuel() 
    {
        cout << "This vehicle runs on fuel." << endl;
    }
};

//subclass 1
class Car : public Vehicle {
    public:
    void doors() {
        cout << "This car has 4 doors." << endl;
    }
};

//subclass 2
class scooty : public Vehicle {
    public:
    void tyres() {
        cout << "it has 2 tyres." << endl;
    }
};

int main()
{
    Car car;
    scooty scooty;
    car.fuel();
    car.doors();
    scooty.fuel();
    scooty.tyres();
    return 0;
}
