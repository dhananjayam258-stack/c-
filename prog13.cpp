#include<iostream>
#include<string>
int simple(int a,int b,int c){
    return (a*b*c)/1000;
}
int main()
{
    float p,r,t,si;
    std::cout<<"principle amt and time and rate";
    std::cin>> p >> t >> r;
    si=simple(p,t,r);
    std::cout<<"simple intrest :"<<si;
    return 0;
}
