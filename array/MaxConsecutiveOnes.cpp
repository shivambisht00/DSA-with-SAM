// leetcode Q: 485. Max Consecutive Ones



class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0,count = 0 ;
        for(int i = 0 ; i<nums.size(); i++){
            if(nums[i]!=0){
                count++;
            }
            else{
              max = std::max(max, count);
                count = 0;
            }
        }
        if(max<count){
           max = std::max(max, count);
        }
        return max;
    }
};
