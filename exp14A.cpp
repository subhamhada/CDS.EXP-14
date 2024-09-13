//subham
//entc B2
//23070123132
//experiment 14
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string company = "BMW";

    void type() {
        cout << "M 5" << endl;
    }
};

class Specs {
public:
    string mileage = "9.1 kmpl";

    void colour() {
        cout << "black" << endl;
    }
};


class Car : public Vehicle, public Specs {
public:
    string seater = "4 seater";
};

int main() {

    Car f2;


    f2.type();       
    f2.colour();      


    cout << "Company: " << f2.company << endl;
    cout << "Mileage: " << f2.mileage << endl;
    cout << "Seater: " << f2.seater << endl;

    return 0;
}
