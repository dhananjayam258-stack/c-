#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string usn;      
    float t_marks;
    string grade;  
    float puc_marks;   
protected:
    string school; 
    string clg;
public:
    string name; 
    string dob;    
    void getDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter DOB: ";
        getline(cin, dob);
        cout << "Enter USN: ";
        getline(cin, usn);
        cout << "Enter 10th marks: ";
        cin >> t_marks;
        cin.ignore(); 
        cout << "Enter school name: ";
        getline(cin, school);
        cout << "Enter grade: ";
        getline(cin, grade);
        cout << "Enter college name: ";
        getline(cin, clg);
        cout << "Enter PUC marks: ";
        cin >> puc_marks;
        cin.ignore();
    }
    void showDetails() {
        cout << "\n--- Student Info ---" << endl;
        cout << "Name: " << name << endl;
        cout << "DOB: " << dob << endl;           
        cout << "USN: " << usn << endl;      
        cout << "10th Marks: " << t_marks << endl;           
        cout << "School: " << school << endl;       
        cout << "Grade: " << grade << endl;
        cout << "College: " << clg << endl;
        cout << "PUC Marks: " << puc_marks << endl;
    }
};
int main() {
    Student s1;
    s1.getDetails();  
    s1.showDetails();  
    return 0;
}