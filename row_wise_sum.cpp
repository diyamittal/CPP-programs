#include<iostream>
using namespace std;
void rowsum(int arr[][4], int n, int m){
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
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
    rowsum(arr, 3, 4);
}