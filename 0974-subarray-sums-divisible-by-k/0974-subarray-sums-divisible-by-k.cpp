class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
       int sum = 0 , result = 0 ;
        mp[0]=1;// initial me map me 0 or usak count 1 kar diya
        for(int i= 0 ; i< n ; i++){
            sum +=nums[i];
            int rem = sum%k;// rem calculate kiya
            if(rem<0){
                rem+=k; // ager reminder minus me aa gya to ans galat aayeag to ise fix kiya using math
            }
            if(mp.find(rem)!=mp.end()){// ager map me rem mila to use result me bhej do
               result += mp[rem];
            }
            mp[rem]++;// or fir rem ko bhi increase karo 
        }
        return result;
    }
};