class Solution {
public:
    bool isPalindrome(string s) {
        string ans ="";
        for(int i = 0 ; i < s.size();i++){
            if(isalnum(s[i])){
            ans+= tolower(s[i]);
        }
        }
    
        int st = 0;
         int en = ans.size()-1;
        while(st<=en){
            if(ans[st]!=ans[en]){
                return false;
            }
            st++;
            en--;
        }
        return true;
    }
};
