#include<bits/stdc++.h>
using namespace std;

bool check(string s, int i, int j){
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        return check(s, i++, j--);
    }
}

int main(){
    string str="baabb";
    bool ans = check(str, 0, str.length()-1);
    if(ans){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
}