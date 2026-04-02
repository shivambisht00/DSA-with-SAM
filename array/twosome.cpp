#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<pair<int, int>> temp;
        for (int i = 0; i < nums.size(); i++) {
            temp.push_back({nums[i], i});
        }

       
        sort(temp.begin(), temp.end());

        int s = 0;
        int e = temp.size() - 1;

        while (s < e) {
            int current_sum = temp[s].first + temp[e].first;
            
            if (current_sum == target) {
                return {temp[s].second, temp[e].second};
            }
            else if (current_sum > target) {
                e--;
            }
            else {
                s++;
            }
        }
        return {};
    }
};

int main() {
    Solution sol;
    
   
    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices found: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}
