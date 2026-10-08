class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        stack<char> st;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                if(!st.empty()){
                     ans += s[i]; // outer hai '(' skip kar do
                }
                st.push(s[i]);
            }

            else { // ')'
                st.pop();
                if(!st.empty()){ 
                    ans += s[i]; // outer hai ')' skip kar do
                }
            }
        }
       
       
        return ans;
    }
};