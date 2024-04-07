#include<iostream>
using namespace std;
//Volume of cylinder
int volume(double r, int h){
    return (3.14*r*r*h);
}
//Volume of cube
int volume(int a){
    return (a*a*a);
}
//Volume of cuboid
int volume(int l, int b, int h){
    return (l*b*h);
}
int main(){
    cout<<"Volume of cylinder is"<<volume(3,7)<<endl;
    cout<<"Volume of cube is"<<volume(3)<<endl;
    cout<<"Volume of cuboid is"<<volume(3,7,5)<<endl;
    return 0;
}