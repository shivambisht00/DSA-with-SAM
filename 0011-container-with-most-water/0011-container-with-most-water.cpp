class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
      int ans = INT_MIN;
        int i = 0 ;
        int j = n-1;
        while(i<j){
            int width = j-i;
            int len = 0;
            if(height[i]< height[j]){
                len = height[i];
                i++;
            }
            else if(height[i]>=height[j]){
                len = height[j];
                j--;
            }
            int area = len*width;
            ans  = max(ans,area);
            }
            return ans;
    }
};