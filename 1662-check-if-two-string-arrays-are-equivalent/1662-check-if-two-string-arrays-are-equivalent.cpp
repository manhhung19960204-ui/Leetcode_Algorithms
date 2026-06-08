class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result = "" ;
        string result2 = "" ;
        for(int i=0 ; i< word1.size() ; i++) {
            result += word1[i];
        }

        for(int j=0 ; j< word2.size() ; j++) {
            result2 += word2[j];
        }

        if(result == result2) {
            return true;
        } else {
            return false;
        }
    }
};