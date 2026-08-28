class Solution {
public:
    int arrangeCoins(int n) {
        long left = 0, right = n;
        
        while (left <= right) {
            long mid = left + (right - left) / 2;
            long current_coins = mid * (mid + 1) / 2;
            
            if (current_coins == n) {
                return (int)mid;
            }
            if (current_coins < n) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return (int)right; 
    }
};