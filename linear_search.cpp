#include<bits/stdc++.h>
using namespace std;

bool Linearsearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[100];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter value"<<endl;

    int key;
    cin>>key;
    bool ans = Linearsearch(arr, n, key);
    if(ans){
        cout<<"Element present";
    }
    else{
        cout<<"Element not present";
    }
}