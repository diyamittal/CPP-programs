#include<iostream>
using namespace std;
int main(){
    int n,X,mid,low,high,count=0;
    cout<<"Enter size of array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter number to search";
    cin>>X;
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]<X){
            low=mid+1;
        }
        else if(a[mid]==X){
            cout<<"Number occurs"<<count<<"number of times";
            break;
        }
        else{
            high=mid-1;
        }
    }
    if(low>high){
        cout<<"Number not found";
    }
    return 0;
}