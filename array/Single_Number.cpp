//Q:136 Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.You must implement a solution with a linear runtime complexity and use only constant extra space.


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {2, 2, 1};  

    Solution obj;
    int result = obj.singleNumber(nums);

    cout << "Single number is: " << result << endl;

    return 0;
}
