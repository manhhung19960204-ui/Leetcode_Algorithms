class Solution {
public:
    int strStr(string haystack, string needle) {
int hLen = haystack.length();
    int nLen = needle.length();
    
    // Chỉ cần duyệt đến hLen - nLen vì nếu dài hơn thì không thể chứa needle được
    for (int i = 0; i <= hLen - nLen; i++) {
        int j = 0;
        // Kiểm tra từng ký tự
        for (j = 0; j < nLen; j++) {
            if (haystack[i + j] != needle[j]) break;
        }
        // Nếu j chạy hết chiều dài của needle nghĩa là khớp hoàn toàn
        if (j == nLen) return i;
    }
    return -1;

    }
};