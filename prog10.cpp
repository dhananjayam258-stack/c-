#include <iostream>
#include <string>
using namespace std;

// 1. greetUser function
void greetUser(string name) {
    cout << "Hello " << name << "! Nice to meet you." << endl;
}

// 2. Call by value - function gets a copy of the variable
void callByValue(int a) {
    cout << "Inside callByValue: a = " << a << endl;
    a = a + 5;  // This change stays only inside this function
    cout << "Inside callByValue after adding 5: a = " << a << endl;
}

// 3. Call by reference - function gets the actual variable
void callByReference(int &a) {
    cout << "Inside callByReference: a = " << a << endl;
    a = a + 5;  // This change affects the original variable
    cout << "Inside callByReference after adding 5: a = " << a << endl;
}

int main() {
    string name;
    int num = 20;
    
    cout << "Enter your name: ";
    getline(cin, name);
    
    greetUser(name);
    
    cout << "\nIn main, num before calls = " << num << endl;
    
    callByValue(num);
    cout << "In main, num after callByValue = " << num << endl; // Still 20
    
    callByReference(num);
    cout << "In main, num after callByReference = " << num << endl; // Now 25
    
    return 0;
}