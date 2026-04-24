// reverse a string using stack
#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s = "hello"; 
    stack<char>st;
    int n = s.size();
    for(int i = 0 ; i<n ; i++){
        st.push(s[i]);
    }
  
    while(!st.empty()){
        // element dekhne ke liye
        cout<<st.top();
        // ab element delete karne ke liye
        st.pop();
    }
    return 0;
    }
    

    
