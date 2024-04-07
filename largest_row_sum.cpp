#include<bits/stdc++.h>
using namespace std;
void largestrowsum(int arr[][4], int n, int m){
    int maxi=INT_MIN;
    int rowindex=-1;
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=i;
        }
    }
    cout<<"Maximum sum is "<<maxi<<" at index "<<rowindex<<endl;
}
int main(){
    int arr[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    largestrowsum(arr, 3, 4);
}