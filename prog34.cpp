#include <iostream>
#include <fstream>
#include <cstring> // for strcpy
using namespace std;
struct menuitems{
    int item_id;
    char item_name[30]; // changed from string to char array
    float item_price;
};
void add_item(){
    ofstream file("menu.dat", ios::app | ios::binary);
    menuitems m;
    cout << "Enter Item ID, Name, Price: ";
    cin >> m.item_id >> m.item_name >> m.item_price;
    file.write((char*)&m, sizeof(m));
    file.close();
    cout << "Record added\n";
}
void delete_item(){
    int id;
    cout << "Enter Item ID to delete: ";
    cin >> id;
    ifstream file("menu.dat", ios::binary);
    ofstream temp("temp.dat", ios::binary);
    menuitems m;
    bool found = false;
    while(file.read((char*)&m, sizeof(m))) {
        if(m.item_id!= id) {
            temp.write((char*)&m, sizeof(m));
        } else {
            found = true;
        }
    }
    file.close();
    temp.close();
    remove("menu.dat");
    rename("temp.dat", "menu.dat");
    if(found) {
        cout << "Record deleted\n";
    } else {
        cout << "Item ID not found\n";
    }
}
void display(){
    ifstream file("menu.dat", ios::binary);
    menuitems m;
    cout << "\nID\tName\t\tPrice\n";
    cout << "------------------------\n";
    while(file.read((char*)&m, sizeof(m))) {
        cout << m.item_id << "\t" << m.item_name << "\t\t" << m.item_price << "\n";
    }
    file.close();
}
int main(){
    int choice;
    do {
        cout << "\n1. Add Item\n2. Delete Item\n3. Display Menu\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch(choice) {
            case 1: add_item(); break;
            case 2: delete_item(); break;
            case 3: display(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while(choice!= 4);
    return 0;
}