// Q35.  Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0, en = nums.size() - 1;
        
        while (st <= en) {
            int mid = st + (en - st) / 2;
            
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                en = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }
        
        return st; 
    }
};

int main() {
    int n, target;
    
    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter target: ";
    cin >> target;
    
    Solution obj;
    int result = obj.searchInsert(nums, target);
    
    cout << "Insert position: " << result << endl;
    
    return 0;
}
