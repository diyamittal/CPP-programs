#include<iostream>
using namespace std;
int main(){
    int n,X,count=0,max=0;
    cout<<"Enter size of array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"Peak of array is "<< max;
    return 0;
}