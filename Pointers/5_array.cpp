#include<iostream>
using namespace std;
int main(){
    int arr[10]={23, 122, 42, 67};
    
    cout<<"Address of first block "<<arr<<endl;
    cout<<"Address of first block "<<&arr[0]<<endl;
    cout<<arr[0]<<endl;

    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr)+1<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;

    int i=3;
    cout<<i[arr]<<endl;
}