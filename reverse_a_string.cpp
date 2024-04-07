#include<iostream>
using namespace std;

void reverse(char name[], int n){
    // for(int i=n-1; i>=0; i--){
    //     cout<<name[i];
    // }
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
    cout<<name;
}
int getlength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name ";
    cin>>name;
    cout<<"Your name is "<<name<<endl;

    int n = getlength(name);

    reverse(name, n);
}