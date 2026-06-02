#include<iostream>
#include<string>
using namespace std;

class food_item{
    private:
        string name;
        float price;
public:
    food_item(string n, float p) {
        name = n;
        price = p;
    }
    string getName() {
        return name;
    }
    float getPrice() {
        return price;
    }
};

class veg_food : public food_item {
public:    
    veg_food(string n, float p) : food_item(n, p) {}
    void display() {
        cout << getName() << " - Rs." << getPrice() << " [VEG]" << endl;
    }
};

class nonveg_food : public food_item {
public:
    nonveg_food(string n, float p) : food_item(n, p) {}
    void display() {
        cout << getName() << " - Rs." << getPrice() << " [NON-VEG]" << endl;
    }
};

int main(){
    int choice;
    cout<<"1. Veg Food\n2. Non-Veg Food\nEnter your choice: ";
    cin>>choice;

    // Declare objects before switch so they exist after
    veg_food v1("paneer butter masala", 250.0), v2("dal rice", 70.0);
    nonveg_food nv1("chicken biryani", 100.0), nv2("mutton biryani", 150.0);

    switch(choice){
        case 1:
            cout<<"You chose Veg Food."<<endl;
            break;
        case 2:
            cout<<"You chose Non-Veg Food."<<endl;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
            return 0; // Exit if invalid
    }

    cout<<"\n--- MENU ---\n";
    
    // Show only what user chose
    if(choice == 1) {
        v1.display();
        v2.display();
    }
    else if(choice == 2) {
        nv1.display();
        nv2.display();
    }

    return 0;
}