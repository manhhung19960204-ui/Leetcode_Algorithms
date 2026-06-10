class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatestNum = 0;
        for(int i = 0 ; i < candies.size() ; i++) {
            if(greatestNum < candies[i]) {
                greatestNum = candies[i];
            } 
        }
        vector<bool> result;
        for(int i = 0 ; i < candies.size() ; i++) {
            if(greatestNum <= candies[i] + extraCandies) {
                 result.push_back(true);
            } else {
                 result.push_back(false);
            }
        }

        return result;
    }
};