class Solution {
public:
    int romanToInt(string s) {
        map<char,int> numerals ;
        numerals['I'] = 1;
        numerals['V'] = 5;
        numerals['X'] = 10;
        numerals['L'] = 50;
        numerals['C'] = 100;
        numerals['D'] = 500;
        numerals['M'] = 1000;
        int result = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            if (numerals.count(s[i])) {
                // In ra giá trị tương ứng
                cout << "Ky tu " << s[i] << " co gia tri la: " << numerals[s[i]] << endl;
                // Logic xử lý số La Mã thường sẽ cộng vào kết quả ở đây
            if (i + 1 < s.length() && numerals[s[i]] < numerals[s[i+1]]) {
                result -= numerals[s[i]]; // Thực hiện phép trừ (VD: IV là -1 + 5)
            } else {
                result += numerals[s[i]]; // Thực hiện phép cộng bình thường
            }           
        }
        }
        return result;
    }
};