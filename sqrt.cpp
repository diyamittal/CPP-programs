#include<bits/stdc++.h>
using namespace std;

int sqrtint(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<e){
        long long square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double solution(int n, int precision, int temp){
    double factor=1;
    double ans=temp;
    for(int i=0; i<precision; i++){
        factor=factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int temp=sqrtint(n);
    cout<<solution(n, 3, temp);
}