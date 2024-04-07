#include<iostream>
using namespace std;
int main(){
    int num=5;
    int a=num;
    a++;
    cout<<num<<endl;
    cout<<&num<<endl;
    cout<<a<<endl;
    
    int *p=&num;
    (*p)++;
    cout<<num<<endl;
    cout<<&num<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

    //copying a pointer
    int *q=p;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
}