#include<iostream>
using namespace std;
int main(){
    int n,X,count=0;
    cout<<"Enter size of array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter number to find frequency";
    cin>>X;
    for(int i=0;i<n;i++){
        if(a[i]==X){
            count++;
        }
    }
    cout<<"Frequency of number "<< X<<" is "<< count;
    return 0;
}