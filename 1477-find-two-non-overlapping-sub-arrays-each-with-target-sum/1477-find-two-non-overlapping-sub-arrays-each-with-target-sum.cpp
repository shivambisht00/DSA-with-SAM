class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
       int n = arr.size();
        vector<int>left_min(n,INT_MAX);
        vector<int>right_min(n,INT_MAX);
        // first part left to right
        int sum = 0 , l = 0 , min_len = INT_MAX;
        for(int i = 0 ; i< n ; i++){
            sum += arr[i];
            while(sum>target){
                sum-= arr[l++];
            }
            if(sum == target){
                min_len = min(min_len,i-l+1);
            }
            left_min[i] = min_len;
        }
        // second part right to left
        l = n-1, sum = 0 , min_len = INT_MAX;
        for(int i = n-1; i>=0; i--){
            sum +=arr[i];
            while(sum >target){
                sum-=arr[l--];
            }
            if(sum == target){
                min_len = min(min_len, l-i+1) ;
            }
            right_min[i]= min_len;
        }
        // merge 
        int ans = INT_MAX;
        for(int i = 0 ; i< n-1; i++){
            if(left_min[i]!=INT_MAX && right_min[i+1]!= INT_MAX){
                ans = min(ans,left_min[i]+right_min[i+1]);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};