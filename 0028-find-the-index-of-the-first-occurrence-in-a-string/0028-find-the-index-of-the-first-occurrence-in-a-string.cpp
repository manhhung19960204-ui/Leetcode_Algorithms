class Solution {
public:
    int strStr(string haystack, string needle) {
        int haylengh= haystack.length();
        int needLength = needle.length();
        for(int i = 0 ; i <= haylengh - needLength ; i++) {
            int j = 0;
            for( j = 0 ; j < needLength ; j++) {
                if(haystack[i+j] != needle[j]) break ;
            }

            if(j == needLength) return i;
        }

        return -1;
    }
};