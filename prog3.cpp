#include<iostream>/// create a programm in c++ of addtion of two numbers
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter two numbers \n";
    cin >> a >> b ;
    c = a+b;
    cout << "sum =" << c << endl;
    return 0;
}






#include <iostream>
using namespace std;
// Function prototype
int addTwoNumbers(int a, int b);
int main() {
   int num1, num2, sum;
   // Input two numbers
   cout << "Enter the first number: ";
   cin >> num1;
   cout << "Enter the second number: ";
   cin >> num2;
   // Call the function to calculate the sum
   sum = addTwoNumbers(num1, num2);
   // Display the result
   cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
   return 0;
}
// Function definition
int addTwoNumbers(int a, int b) {
   return a + b;
}