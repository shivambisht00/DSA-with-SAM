class Solution {
public:
    int maxDepth(string s) {
        int ans = 0 , current = 0 ;
        for(auto x : s){
            if(x=='('){
                current++;
                ans  = max(current,ans);

            }
            else if(x==')'){
                current--;
            }
        }
        return ans;
    }
};