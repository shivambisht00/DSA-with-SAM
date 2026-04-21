//leet code 1748: Sum of Unique Elements
// you are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

// Return the sum of all the unique elements of nums.

 

// Example 1:

// Input: nums = [1,2,3,2]
// Output: 4
// Explanation: The unique elements are [1,3], and the sum is 4.


class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>mp;
        int ans = 0;
        int n = nums.size();
        for(int i = 0 ; i< n ; i++){
            mp[nums[i]]++; // nums is a vector 
        }
     for(auto it: mp){
        if(it.second==1){
            ans += it.first;
        }
     }
     return ans;
    }
};
