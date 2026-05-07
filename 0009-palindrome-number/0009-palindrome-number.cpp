class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string pal = to_string(x);
        int left = 0;
        int right = pal.length() - 1;
        while(left<=right) {
            if(pal[left] != pal[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};