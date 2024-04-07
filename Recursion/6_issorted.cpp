#include<iostream>
using namespace std;

bool issorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return issorted(arr+1, size-1);
    }
}

int main(){
    int size=5;
    int arr[size]={2, 6, 3, 14, 18};

    cout<<issorted(arr, size);
}