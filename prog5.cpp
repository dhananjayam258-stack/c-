#include<iostream>/// create a programm in c++ of addtion of two numbers
using namespace std;
int add(int num1,int num2)
{
    return num1+num2;
}
int sub(int num1,int num2)
{
    return num1-num2;
}
int mul(int num1,int num2)
{
    return num1*num2;
}
int divid(int num1,int num2)
{
    return num1/num2;
}
int main()
{
    float a,b,sum, subs, mult, divi;
    cout << "Enter two numbers \n";
    cin >> a >> b ;
    sum = add(a,b) ;
    cout << "ADD = " << sum  << endl;
    subs = sub(a,b) ;
    cout << "SUBTRACT = " << subs  << endl;
    mult = mul(a,b) ;
    cout << "MULTIPLE = " << mult  << endl;
    divi = divid(a,b) ;
    cout << "DIVISION = " << divi  << endl;
    return 0;
}