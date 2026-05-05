//153. Find Minimum in Rotated Sorted Array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0 ; i < n ; i++){
            ans.push_back(nums[i]);
        }
        sort(ans.begin(),ans.end());// ye laga diya na khtrnak dimag 
        int a = ans[0];
    return a;
    }
};
