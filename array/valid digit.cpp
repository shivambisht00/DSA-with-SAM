// valid degit
class Solution {
public:
    bool validDigit(int n, int x) {
        int temp = n;
        while(temp>=10){
        temp = temp/10;
        }
        if(temp == x){
            return false;
        }
        bool found = false;
        while(n>0){
            int rem = n%10;
            if(rem==x){
                found = true;
                break;
            }
            n = n/10;
        }
        return found;
        
    }
};
