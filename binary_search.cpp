#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return -1;
}
int main(){
    int arr[8]={2, 5, 6, 8, 13, 17, 23, 26};
    int index=binarysearch(arr, 8, 23);
    cout<<index;
}