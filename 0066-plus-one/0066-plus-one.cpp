class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int result = 0;
        for(int i = 0 ; i < digits.size() ; i++) {
             result = result*10 + digits[i];
        }
        result = result + 1 ;
        vector<int> resArray;
        while (result > 0) {
         resArray.push_back(result % 10); 
         result /= 10;                    
        }        
        reverse(resArray.begin(), resArray.end());
        return resArray;
    }
};