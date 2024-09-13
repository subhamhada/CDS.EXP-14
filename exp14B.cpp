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