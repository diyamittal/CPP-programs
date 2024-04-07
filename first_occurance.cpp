#include<iostream>
using namespace std;

int first_occurence(int a[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(a[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key<a[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s +(e-s)/2;
    }
    return ans;
}
int main(){
    int a[9]={1,2,4,4,4,4,4,6,7};
    cout<<first_occurence(a, 9, 4);
}