#include<iostream>
using namespace std;

bool linearsearch(int arr[], int n, int k){
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        return linearsearch(arr+1, n-1, k);
    }
}

int main(){
    int n=5;
    int arr[5]={4, 1, 8, 3, 6};
    int key=0;
    cout<<linearsearch(arr, n, key);
}