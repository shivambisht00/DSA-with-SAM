

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        
        for(int num : nums) {
            vector<int> temp;
            while(num > 0) {
                int m = num%10;
                temp.push_back(m);
                num /= 10;
            }
            
            // Digits reverse order mein nikle hain, toh unhe end se ans mein dalein
            for(int i = temp.size() - 1; i >= 0; i--) {
                ans.push_back(temp[i]);
            }
        }
        
        return ans;
    }
};
