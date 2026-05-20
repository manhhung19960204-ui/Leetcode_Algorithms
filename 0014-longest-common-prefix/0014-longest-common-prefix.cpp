#include<algorithm>
#include <string>

class Solution {
public:
    string findPrefix(string str1, string str2) {
        string tienTo = "";
        size_t doDaiNhoNhat = min(str1.length(), str2.length());
        for(int i = 0 ; i < doDaiNhoNhat ; i++) {
            if(str1[i] == str2[i]) {
                tienTo += str1[i];
            } else {
                break;
            }
        }
        return tienTo;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = strs[0];
        for(int i = 0 ; i< strs.size() ; i++) {
            prefix = findPrefix(prefix, strs[i]);
            if (prefix.empty()) return "";
        }
        return prefix;
    }
};