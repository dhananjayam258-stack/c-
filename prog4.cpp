#include<iostream>/// create a programm in c++ of addtion of two numbers
using namespace std;
int add(int num1,int num2)
{
    return num1+num2;
}
int main()
{
    int a,b,sum;
    cout << "Enter two numbers \n";
    cin >> a >> b ;
    sum = add(a,b) ;
    cout << "result = " << sum  << endl;
    return 0;
}