#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    for(int i=1;i<11;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}