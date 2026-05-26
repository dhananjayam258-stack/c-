#include<iostream>
#include<string>
using namespace std;
void greetuser(std::string name){
    cout<<"Hello,"<< name<<"! Welcome."<<std::endl;

}
void incrementByValue(int num){
    num = num+1;
    cout<<"Inside incrementByValue: "<< num << std::endl;
}
void incrementByReference(int &num){
    num = num+1;
    cout<<"Inside incrementByReference: "<<num << std::endl;
}
int main(){
    string userName;
    int x = 15;

    cout<<"Enter your name: ";
    getline(cin,userName);

    greetuser(userName);

    cout<<"\nOriginal x = "<< x << std::endl;

    incrementByValue(x);
    cout<<"After incrementByValue,X = "<<x<<std::endl;

    incrementByReference (x);
    cout<<"after incrementByreferce  x="<<x<<std::endl;
    return 0;
}
