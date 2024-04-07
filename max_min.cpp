#include<bits/stdc++.h>
using namespace std;

int getmax(int arr[], int n){
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[], int n){
    int min=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Maximum no is"<<getmax(arr, n)<<endl;
    cout<<"Minimum no is"<<getmin(arr, n)<<endl;
}