#include <queue>

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
            int count[26];
            for(int i=0 ; i< 26; i++) {
                count[i] = 0;
            }

            for(int i=0 ; i< magazine.length(); i++) {
                int index = magazine[i] - 'a';
                count[index]++;
            }

            for(int i=0 ; i< ransomNote.length(); i++) {
                int index = ransomNote[i] - 'a';
                if(count[index] <= 0) {
                    return false;
                }
                count[index]--;
            }
            return true;
    }
};