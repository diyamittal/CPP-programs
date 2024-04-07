#include<bits/stdc++.h>
using namespace std;

void sortarray(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(arr[i]==1 && arr[j]==0 && i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7]={1, 0, 1, 0, 0, 1, 0};
    sortarray(arr, 7);
    print(arr, 7);
}