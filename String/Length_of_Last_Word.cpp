//leet code 58: Length of Last Word
//Given a string s consisting of words and spaces, return the length of the last word in the string.

class Solution {
public:
    int lengthOfLastWord(string s) {
     int n = s.length();
    int count = 0;

    // Step 1: skip trailing spaces
    int i = n - 1;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Step 2: count last word length
    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;
}
    }
};
