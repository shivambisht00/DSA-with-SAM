
// leet code 34. Find First and Last Position of Element in Sorted Array

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0 , en = nums.size()-1;
        int a = -1, b = -1;
        while(st<=en){
            int mid = st+(en-st)/2;
            if(nums[mid]==target){
                a = mid;
                en = mid-1;
            }
            else if(nums[mid]>target){
               en = mid-1;
            }
            else 
            st= mid +1;
        }
         st = 0 , en = nums.size()-1;
        while(st<=en){
            int mid =  st+(en-st)/2;
            if(nums[mid]==target){
                b= mid;
                st = mid+1;
            }
            else if(nums[mid]>target){
                en = mid-1;
            }
            else 
           st = mid+1;
        }
        return {a,b};
    }
};
