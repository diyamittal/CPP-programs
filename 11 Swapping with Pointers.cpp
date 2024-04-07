#include<iostream>
using namespace std;
void swapPointer(int *a, int *b){
    int temp= *a;
    *a= *b;
    *b= temp;
}
int main(){
    int x=4, y=5;
    cout<<"x is"<<x<<"y is"<<y<<endl;
    swapPointer(&x, &y);
    cout<<"x is"<<x<<"y is"<<y<<endl;
    return 0;
}