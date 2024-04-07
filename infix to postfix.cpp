#include<iostream>
#include<string>
#include<stack>
using namespace std;
//function to return precedence
int prec(char c){
    if (c=='^'){
        return 3;
    }
    else if(c=='/' || c=='*'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
void infixtopostfix(string s){
    stack<char> st;
    string res;
    for(int i=0; i<s.length();i++){
        char c=s[i];
        if((c>= 'a' && c<= 'z') || (c>= 'A' && c<='Z') || (c>= '0' && c<='9')){
            res=res+c;
        }
        else if(c=='('){
            st.push('(');
        }
        else if(c==')'){
            while(st.top()!='('){
                res=res+st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(s[i])<=prec(st.top())){
                res=res+st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        res=res+st.top();
        st.pop();
    }
    cout<<res;
}
int main(){
    string t="((3+4)*5)";
    infixtopostfix(t);
    return 0;
}