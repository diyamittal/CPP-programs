#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"Factorial of number is "<<factorial(a)<<endl;

    return 0;
}