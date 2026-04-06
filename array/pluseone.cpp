// Q 66: You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Right se start karo
        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits; // kaam khatam
            }
            digits[i] = 0; // carry aage bhejo
        }

        // Agar sab 9 the (e.g. 999 -> 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution obj;
    vector<int> digits = {9, 9, 9};

    vector<int> result = obj.plusOne(digits);

    cout << "Result: ";
    for(int x : result) {
        cout << x << " ";
    }
}
