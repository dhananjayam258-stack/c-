#include <iostream>
#include <string>
using namespace std;
class MenuItem {
protected:
    string itemName; 
    double price; 

public:
    virtual void display() = 0;
    string getName() {
        return itemName;
    }
    double getPrice() {
        return price;
    }
    void setPrice(double p) {
        if(p > 0) {
            price = p;
        } else {
            cout << "Invalid price!" << endl;
        }
    }
    virtual ~MenuItem() {}
};
class Food : public MenuItem {
private:
    bool isVeg;

public:
    Food(string name, double p, bool veg) {
        itemName = name;
        price = p; 
        isVeg = veg;
    }
    void display() override {
        cout << itemName << " - Rs." << price;
        if(isVeg) cout << " [Veg]";
        else cout << " [Non-Veg]";
        cout << endl;
    }
    bool getIsVeg() {
        return isVeg;
    }
};
int main() {
    int size;
    cout << "How many items in menu? ";
    cin >> size;
    cin.ignore();
    MenuItem* menu[size];
    for(int i = 0; i < size; i++) {
        string name;
        double price;
        char vegChoice;
        cout << "\nItem " << i + 1 << " name: ";
        getline(cin, name);
        cout << "Price: ";
        cin >> price;
        cout << "Is it Veg? y/n: ";
        cin >> vegChoice;
        cin.ignore();
        bool isVeg = (vegChoice == 'y' || vegChoice == 'Y');
        menu[i] = new Food(name, price, isVeg);
    }
    cout << "\n--- HOTEL MENU ---" << endl;
    for(int i = 0; i < size; i++) {
        cout << i + 1 << ". ";
        menu[i]->display(); 
    }
    return 0;
}