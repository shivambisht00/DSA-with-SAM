// leetcode 3783. Mirror Distance of an Integer
class Solution {
public:
    int mirrorDistance(int n) {
        int orignal = n ;
        int  reversed = 0;
        while(n>0){
            int digit = n%10;
            reversed = reversed * 10 + digit;
            n = n/10;
        }
        int distance = abs(orignal - reversed);
        return distance;
    }
};
