class Solution {
public:
int sum(vector<int>arr , int div){
    int n = arr.size();
    int ans = 0;
    for(int i = 0 ; i<n ; i++){
        ans +=ceil((double)(arr[i])/(double)(div));
    }
    return ans;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = *max_element(nums.begin(),nums.end());
        int low= 1 ; 
        while(low<=high){
            int mid = low+(high-low)/2;
            if(sum(nums,mid)<=threshold){
                high =mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};
