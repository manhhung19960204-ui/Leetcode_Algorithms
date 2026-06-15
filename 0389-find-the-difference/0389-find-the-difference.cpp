class Solution {
public:
    char findTheDifference(string s, string t) {
        int count[26] ;
        for(int i = 0 ; i < 26; i++){
            count[i] = 0;
        }

        for(int i = 0 ; i < s.length(); i++){
            int idx = s[i] - 'a';
            count[idx]++;
        }

        for(int k = 0 ; k < t.length(); k++){
            int idx = t[k] - 'a';
            if( count[idx] <= 0) {
                return t[k];
            }
            count[idx]--;
        }
        return ' ';
    }
};