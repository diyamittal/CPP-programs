#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *p=&num;
    cout<<num<<endl;
    cout<<&num<<endl;

    cout<<p<<endl;
    cout<<*p<<endl;

    *p=*p+1;
    cout<<p<<endl;
    cout<<*p<<endl;

    p=p+1;
    cout<<p<<endl;
    cout<<*p<<endl;
}