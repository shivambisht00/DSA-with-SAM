// leet cde 1848. Minimum Distance to the Target Element

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        
        for(int i = 0; i< n; i++) {
            
            // right check
            if(start + i < n && nums[start + i] == target)
                return i;
            
            // left check
            if(start - i >= 0 && nums[start - i] == target)
                return i;
        }
        
        return -1; 
    }
};
