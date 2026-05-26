#include <iostream>
#include <string>
using namespace std;

// 1. Greet user function
void greetUser(string name) {
    cout << "Hi " << name << ", good to see you!" << endl;
}

// 2. Pass by value - function gets a copy
void valueByValue(int num) {
    cout << "Inside valueByValue, received: " << num << endl;
    num = num * 2; // Only changes the copy
    cout << "Inside valueByValue, after doubling: " << num << endl;
}

// 3. Pass by reference - function gets original variable
void valueByReference(int &num) {
    cout << "Inside valueByReference, received: " << num << endl;
    num = num * 2; // Changes the original variable
    cout << "Inside valueByReference, after doubling: " << num << endl;
}

int main() {
    string userName;
    int number = 25;
    
    cout << "Enter your name: ";
    getline(cin, userName);
    
    greetUser(userName);
    
    cout << "\nMain: number before functions = " << number << endl;
    
    valueByValue(number);
    cout << "Main: number after valueByValue = " << number << endl; // Still 25
    
    valueByReference(number);
    cout << "Main: number after valueByReference = " << number << endl; // Now 50
    
    return 0;
}