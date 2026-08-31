class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        if(x==0) return 0;
        int st  = 1, en = x;
        while(st<=en){
            int mid = st+(en-st)/2;
            if(mid <= x/mid){
                 ans = mid;
               st = mid +1;
            }
            else 
                en = mid-1;
        }
        return ans;
        
    }
};