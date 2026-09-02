class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int>nums2(nums1.size(),0);
        if (nums1.size() == 1) return true;
        for(int i = 0 ; i< nums1.size(); i++){
            if(nums1[i]%2==0){
                nums2[i] = nums1[i];
            }
          else {
           int j = (i + 1) % nums1.size();
              nums2[i] = nums1[i] - nums1[j];
            
          }
        }
        return  true;
    }
};