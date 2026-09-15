#include <sstream>
#include <string>
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int index = 1; 
        
        while (ss >> word) {// >> stream extraction operator 
            // Check if searchWord is a prefix of current word
            if (word.rfind(searchWord, 0) == 0) {
                return index;
            }
            index++;
        }
        
        return -1;
    }
};