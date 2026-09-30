class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.size();
        int depth = 0 ;
        vector<int>ans(n);
        for(int i = 0 ; i< n ; i++){
            if(seq[i]=='('){
                depth++;
                if(depth % 2== 0){
                ans[i]=0;
            }
            else{
                ans[i]=1;
            }
            }
            else{
                if(depth % 2== 0){
                ans[i]=0;
            }
            else{
                ans[i]=1;
            }
            depth--;
            }
        
        }
        return ans;
    }
};