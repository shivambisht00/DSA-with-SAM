// leet code 4. Median of Two Sorted Arrays


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;

        for(int i = 0; i < nums1.size(); i++){
            nums3.push_back(nums1[i]);    
        }
        for(int i = 0; i < nums2.size(); i++){
            nums3.push_back(nums2[i]);    
        }

        sort(nums3.begin(), nums3.end());

        int n = nums3.size();
        double ans = 0.0;

        if(n % 2 == 0){
            ans = (nums3[n/2 - 1] + nums3[n/2]) / 2.0;
        } else {
            ans = nums3[n/2];
        }

        return ans;
    }
};
