#include<iostream>
using namespace std;
class parent 
{
    public:
    void display()
    {
        cout<<"This is the parent class."<<endl;
    }
};
class child: public parent
{
    public:
    void display()
    {
        cout<<"This is the child class."<<endl;
    }
};
int main()
{
    child c;
    c.display(); // Calls the child class display function
    c.parent::display(); // Calls the parent class display function
    return 0;
}