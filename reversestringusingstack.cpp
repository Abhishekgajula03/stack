#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="ashitaa";
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char a=s[i];
        st.push(a);
    }
    string res="";
    while(!st.empty()){
        char b=st.top();
        res.push_back(b);
        st.pop();
    }
    cout<<res<<" ";
}
