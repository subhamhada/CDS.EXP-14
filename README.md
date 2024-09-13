# EXPERIMENT - 14
## Aim :
To study and implement Inheritance

## Apparatus :
Vs code

## Theory :
C++ Inheritance

Inheritance is a core concept in object-oriented programming (OOP) that allows one class to acquire the properties and behaviors of another class. This promotes code reusability, extendability, and hierarchical classification.

## Types of Inheritance

- **Single Inheritance**:
  - A derived class inherits from a single base class.

- **Multiple Inheritance**:
  - A derived class inherits from more than one base class.

- **Multilevel Inheritance**:
  - A class is derived from another derived class, forming a multi-level hierarchy.

- **Hierarchical Inheritance**:
  - Multiple derived classes inherit from a single base class.

- **Hybrid Inheritance**:
  - A combination of multiple inheritance and multilevel inheritance.
 
## Access Specifiers in Inheritance :

  - Public members of the base class remain public in the derived class.
  - Protected members remain protected.
  - Private members are not directly accessible but can be accessed via public/protected methods.

- **Protected Inheritance**:
  - Public and protected members of the base class become protected in the derived class.

- **Private Inheritance**:
  - Public and protected members of the base class become private in the derived class.

## Abstract Classes

- **Abstract Class**:
  - A class containing at least one pure virtual function (e.g., `virtual void func() = 0;`).
  - Cannot be instantiated directly.
  - Designed to be inherited by other classes.

## Benefits of Inheritance

- **Code Reusability**: Allows reuse of existing code.
- **Extendability**: Facilitates the addition of new features with minimal changes.
- **Polymorphism**: Supports the creation of more flexible and extensible systems by allowing derived classes to override base class methods.

## Codes :
### 1 : *Single Inheritance*
```
//subham
//entc B2
//23070123132
//experiment 14
#include <iostream>
#include <string>
using namespace std;

class Uni
{
public:
    string uni = "subham: ";
    void discipline() 
    {
        cout << "Engineering" << endl;
    }
};

class Dep : public Uni {
public:
    string dept = "Electronics & Tele-Communication";
};

int main() {
    Dep u1;
    u1.discipline();
    cout << u1.uni + u1.dept << endl;
    return 0;
}
```

### 2: *Multiple Inheritance*
```
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
```

### 3: *Multilevel Inheritance*
```
//subham
//entc B2
//23070123132
//experiment 14
#include <iostream>
#include <string>
using namespace std;

// Base class: Restaurant
class Restaurant {
protected:
    string name;
    string location;

public:
    Restaurant(string n, string loc) : name(n), location(loc) {}

    void displayInfo() {
        cout << "Restaurant: " << name << ", Location: " << location << endl;
    }
};

// Derived class from Restaurant: Menu
class Menu : public Restaurant {
protected:
    string menuItems[3] = {"Pizza", "Pasta", "wrap"};

public:
    Menu(string n, string loc) : Restaurant(n, loc) {}

    void displayMenu() {
        cout << "Menu Items: " << endl;
        for (const auto& item : menuItems) {
            cout << "- " << item << endl;
        }
    }
};

// Derived class from Menu: Order
class Order : public Menu {
private:
    string customerName;
    string orderItem;

public:
    Order(string n, string loc, string custName, string ordItem)
        : Menu(n, loc), customerName(custName), orderItem(ordItem) {}

    void displayOrder() {
        cout << "Customer: " << customerName << endl;
        cout << "Ordered: " << orderItem << endl;
    }
};

int main() {
    // Create an order for a customer
    Order myOrder("Food Paradise", "Downtown", "subham", "wrap");

    // Display restaurant information, menu, and order details
    myOrder.displayInfo();   // From Restaurant class
    myOrder.displayMenu();   // From Menu class
    myOrder.displayOrder();  // From Order class

    return 0;
}
```

### 4: *Inheritance*
```
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
```

### outputs :
### 1: *Single Inheritance*
![Screenshot 2024-09-13 105830](https://github.com/user-attachments/assets/9e70d3ef-62e0-478f-8cb0-89ab75b65280)

### 2: *Multiple Inheritance*
![Screenshot 2024-09-13 105847](https://github.com/user-attachments/assets/cf49d5d0-2e8a-41c8-8e05-17a6ea88b0f8)

### 3: *Multilevel Inheritance*
![Screenshot 2024-09-13 105911](https://github.com/user-attachments/assets/e811a86e-ec8f-4508-8d56-9d61a633cd66)

### 4: *Inheritance*
![Screenshot 2024-09-13 105928](https://github.com/user-attachments/assets/1ae5cb8f-ad2c-4270-92ac-fb3451bd3f05)

### Conclusion :
A useful object-oriented programming (OOP) technique in C++ is inheritance, which lets a class (also referred to as a derived class) inherit traits and actions (data members and member functions) from another class (referred to as the base class). It encourages flexibility, hierarchical relationships between classes, and reusing code. <BR>
By extending the functionality of existing classes through inheritance, programmers can create more specialized classes and simplify the maintenance and updating of the code. In C++, inheritance comes in a variety of forms that can be used to meet different design requirements. These include single, multiple, multilevel, hierarchical, and hybrid inheritance
