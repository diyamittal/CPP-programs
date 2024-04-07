#include<iostream>
using namespace std;
bool iffound(int x, int arr[][4], int n, int m){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]==x){
                return 1;
            }
        }
    }
    return 0;
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
    int X;
    cout<<"Enter number to search "<<endl;
    cin>>X;
    if(iffound(X, arr, 3, 4)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}