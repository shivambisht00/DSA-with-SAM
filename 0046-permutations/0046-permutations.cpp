class Solution {
public:

void permutation(vector<int>&nums, int ind , vector<vector<int>>&ans){
    int n = nums.size();
    if(ind == n ){
        ans.push_back({nums});// new vector form me store 
        return ;
    }
    for(int i = ind ; i < n ; i++){
        swap(nums[ind],nums[i]);
        permutation(nums,ind+1,ans);
        swap(nums[ind],nums[i]);// backtracking
    }

}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permutation(nums,0,ans);
    return ans;

    }
};