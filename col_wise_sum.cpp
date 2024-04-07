#include<iostream>
using namespace std;
void colsum(int arr[][4], int n, int m){
    for(int i=0; i<4; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<" ";
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
    colsum(arr, 3, 4);
}