#include<iostream>
using namespace std;
int main(){
    int n,X,count=0;
    cout<<"Enter size of array";
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter number to search";
    cin>>X;
    for(int i=0;i<n;i++){
        if(nums[i]==X){
            cout<<"Number found at index"<<i<<endl;
            count++;
        }
    }
    if(count==0){
        return -1;
    }
    return 0;
}