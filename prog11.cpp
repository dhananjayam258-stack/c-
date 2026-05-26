#include<iostream>
#include<string>
using namespace std;
void menu(){
    cout<<"\n ------- MENU ----------\n";
    cout<<"1. IDlI - 40rs\n";
    cout<<"2. DOSA - 50rs\n";
    cout<<"3. PURI - 40rs\n";
    cout<<"4. RICE MEAL - 70rs\n";
};
int main()
{
    menu();
    int choice,n;
    cout<<"enter choice (1 - 4)\n";
    cin>>choice;
     cout<<"enter number of plates\n";
    cin>>n;
    switch (choice)
    {
    case 1:
        cout<<"IDLI orded \n"<<n<<" plate" <<" ";
        cout<<"IDLI recived";
        break;
    case 2:
        cout<<"DOSA orded \n"<<n<<" plate" <<" ";
        cout<<"DOSA recived";
        break;
    case 3:
        cout<<"PURI orded \n"<<n<<" plate" <<" ";
        cout<<"PURI recived";
        break;
    case 4:
        cout<<"RICE MEALS orded \n"<<n<<" plate" <<" ";
        cout<<"RICE MEALS recived";
        break;
    default:
        break;
    }
    return 0;
}