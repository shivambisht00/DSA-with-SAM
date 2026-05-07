
// 540. Single Element in a Sorted Array
// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
// Return the single element that appears only once.
// Your solution must run in O(log n) time and O(1) space.

 

// Example 1:

// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int st = 0;
        int en = nums.size() - 1;

        while(st < en){

            int mid = st + (en - st)/2;

            // mid ko even banano
            if(mid % 2 == 1){
                mid--;
            }

            // pair sahi hai
            if(nums[mid] == nums[mid + 1]){
                st = mid + 2;
            }
            else{
                en = mid;
            }
        }

        return nums[st];
    }
};
