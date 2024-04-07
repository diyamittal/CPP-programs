#include<iostream>
using namespace std;

int sum(int arr[], int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    return arr[0]+sum(arr+1, n-1);
}

int main(){
    int n=5;
    int arr[5]={4, 1, 8, 12, 17};

    cout<<sum(arr, n);
}