#include<iostream>
using namespace std;
int main(){
    //push
    int top=-1,n,x,item;
    cout<<"Enter number of elements";
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>x;
        top=top+1;
        s[top]=x;
    }
    //Pop
    if(top==-1){
        cout<<"Stack underflow";
    }
    else{
        item=s[top];
        top=top-1;
    }
    //display
    for(int i=top;i>=0;i--){
        cout<<s[i]<<endl;
    }
    return 0;
}