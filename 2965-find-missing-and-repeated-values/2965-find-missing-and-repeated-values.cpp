class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int totalelements = n*n;
        unordered_map<int,int>mp;
        for(int i = 0 ; i<grid.size(); i++){
            for(int j =0 ; j <grid[i].size(); j++){

           mp[grid[i][j]]++;
            }
        }
            int repeated = -1;
            int missing = -1;
            for(int i = 1 ; i<=totalelements; i++){
                if(mp[i]==2){
                    repeated = i;
                }
                else if (mp[i]==0){
                    missing = i;
                }
            }
        return {repeated,missing};
        
    }
};