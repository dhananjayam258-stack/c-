#include <iostream>
#include <string>
using namespace std;
class MenuItem {
protected:
    string name;
    double price; 
public:
    virtual void display() = 0;

    string getName() {
        return name;
    }
    double getPrice() {
        return price;
    }
    void setData(string n, double p) {
        name = n;
        if(p > 0)
            price = p;
        else
            price = 0;
    }
    virtual ~MenuItem() {}
};
class VegFood : public MenuItem {
public:
    void display() override { 
        cout << name << " - Rs." << price << " [VEG]";
    }
};
class NonVegFood : public MenuItem {
public:
    void display() override {
        cout << name << " - Rs." << price << " [NON-VEG]";
    }
};
class Drink : public MenuItem {
public:
    void display() override {
        cout << name << " - Rs." << price << " [DRINK]";
    }
};
int main() {
    int n, choice, qty;
    double totalBill = 0;
    cout << "How many items in hotel menu? ";
    cin >> n;
    cin.ignore();
    MenuItem* menu[n];
    for(int i = 0; i < n; i++) {
        string name;
        double price;
        cout << "\nItem " << i + 1 << " name: ";
        getline(cin, name);
        cout << "Price: ";
        cin >> price;
        cout << "Type: 1.Veg 2.Non-Veg 3.Drink Enter: ";
        cin >> choice;
        cin.ignore();
        if(choice == 1) {
            menu[i] = new VegFood();
        }
        else if(choice == 2) {
            menu[i] = new NonVegFood();
        }
        else {
            menu[i] = new Drink();
        }
        menu[i]->setData(name, price);
    }
    cout << "\n--- HOTEL MENU ---" << endl;
    for(int i = 0; i < n; i++) {
        cout << i + 1 << ". ";
        menu[i]->display();
        cout << endl;
    }
    cout << "\n--- PLACE YOUR ORDER ---" << endl;
    cout << "Enter 0 to finish ordering" << endl;
    while(true) {
        cout << "\nEnter item number to order: ";
        cin >> choice;
        if(choice == 0) break;
        if(choice < 1 || choice > n) {
            cout << "Invalid item number!" << endl;
            continue;
        }
        cout << "Enter quantity: ";
        cin >> qty;
        double itemTotal = menu[choice - 1]->getPrice() * qty;
        totalBill += itemTotal;
        cout << "Added: " << qty << " x ";
        menu[choice - 1]->display();
        cout << " = Rs." << itemTotal << endl;
        cout << "Current Total: Rs." << totalBill << endl;
    }
    cout << "\n--- FINAL BILL ---" << endl;
    cout << "Total Amount: Rs." << totalBill << endl;
    cout << "Thank you! Visit Again!" << endl;
    for(int i = 0; i < n; i++) {
        delete menu[i];
    }
    return 0;
}