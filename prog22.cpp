#include <iostream>
#include <string>
using namespace std;
struct student
{
    string usn;
    string name;
    float marks;
};
int main()
{
    student s1;
    cout << "Enter USN: ";
    cin >> s1.usn;
    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter marks: ";
    cin >> s1.marks;

    cout << "\nStudent Details:\n";
    cout << "USN: " << s1.usn << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}