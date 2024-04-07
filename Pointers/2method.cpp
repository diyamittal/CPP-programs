#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *p=&num;
    cout<<num<<endl;
    cout<<&num<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

    int *q=0;
    q=&num;
    cout<<num<<endl;
    cout<<&num<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
}