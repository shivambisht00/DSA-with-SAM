// leetcode 2615: Sum of Distances

// you are given a 0-indexed integer array nums. There exists an array arr of length nums.length, where arr[i] is the sum of |i - j| over all j such that nums[j] == nums[i] and j != i. If there is no such j, set arr[i] to be 0.

// Return the array arr.

 

// Example 1:

// Input: nums = [1,3,1,1,2]
// Output: [5,0,3,4,0]
// Explanation: 
// When i = 0, nums[0] == nums[2] and nums[0] == nums[3]. Therefore, arr[0] = |0 - 2| + |0 - 3| = 5. 
// When i = 1, arr[1] = 0 because there is no other index with value 3.
// When i = 2, nums[2] == nums[0] and nums[2] == nums[3]. Therefore, arr[2] = |2 - 0| + |2 - 3| = 3. 
// When i = 3, nums[3] == nums[0] and nums[3] == nums[2]. Therefore, arr[3] = |3 - 0| + |3 - 2| = 4. 
// When i = 4, arr[4] = 0 because there is no other index with value 2. 






// TLE maar jayega per best for know how 
class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        vector<long long>arr;
        for(int i = 0 ; i < nums.size();i++){
            long long ans = 0;
            for(int j = 0 ; j<nums.size();j++){
                if(nums[i]==nums[j] && i!=j){
                     ans +=abs(i-j);
                }

            }
            arr.push_back(ans);
        }
        return arr;
    }
};




// using hash map


class Solution {
public:
    typedef long long ll;
    vector<ll> distance(vector<int>& nums) {
        int n = nums.size();
        vector<ll>arr(n,0);
        unordered_map<int ,ll>indexcount;
        unordered_map<int ,ll>indexsum;
        // left to right 
        for(int i = 0 ; i<n;i++){
            ll freq = indexcount[nums[i]];
            ll sum  = indexsum[nums[i]];
            arr[i]+= ll(i)*freq-sum;
            indexcount[nums[i]]+=1;
            indexsum[nums[i]]+=i;
        }
        indexcount.clear();
        indexsum.clear();
        // right to left 
        for(int i = n-1; i>=0; i--){
             ll freq = indexcount[nums[i]];
            ll sum  = indexsum[nums[i]];
            arr[i]+= sum - ll(i)*freq;
            indexcount[nums[i]]+= 1;
            indexsum[nums[i]]+=i;
        }
        return arr;
    }
};
