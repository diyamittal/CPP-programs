#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After erase ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of list "<<l.size();
    cout<<endl;

    list<int> n(5, 100); 
    for(int i:n){
        cout<<i<<" ";
    }
}