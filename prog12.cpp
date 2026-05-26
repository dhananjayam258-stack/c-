#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string ownerName;
    long long accountNumber;
    string accountType;
    double balance;

public:
    // Function to get account details
    void getDetails()
    {
        cout << "Enter Owner Name: ";
        getline(cin, ownerName);

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cin.ignore();

        cout << "Enter Account Type (Savings/Current): ";
        getline(cin, accountType);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Function to display account details
    void displayDetails()
    {
        cout << "\n----- BANK ACCOUNT DETAILS -----" << endl;
        cout << "Owner Name     : " << ownerName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Type   : " << accountType << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.getDetails();
    account.displayDetails();

    return 0;
}