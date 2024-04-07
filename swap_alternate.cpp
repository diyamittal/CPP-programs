#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapalt(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int a1[6]={3, 6, 1, 2, 7, 8};
    int a2[5]={7, 1, 4, 6, 2};

    swapalt(a1, 6);
    print(a1, 6);

    swapalt(a2, 5);
    print(a2, 5);
}