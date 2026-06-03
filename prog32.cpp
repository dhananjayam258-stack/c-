#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    int n,num;
    cout<<"enter size of an array: ";
    cin>>n;
    vector <int> v;
    cout<<"Enter"<<n<<"numbers:";
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    cout<<"Sorted array: ";
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    list <int> l;
    for(int x : v){
        l.push_back(x);
    }
    l.push_front(0);
    cout<<"List: ";
    for(int x : l){
        cout<<x<<" ";
    }
    cout<<endl;
    stack <int> s;
    for(int x : v){
        s.push(x);
    }
    cout<<"Stack pop: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    queue <int> q;
    for(int x : v){
        q.push(x);
    }
    cout<<"Queue pop: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;

}