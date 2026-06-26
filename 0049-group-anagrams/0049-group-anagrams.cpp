class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> myMap;
        
        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i] ;
            string key = word ;
            sort(key.begin(), key.end());
            myMap[key].push_back(word);
        }
        
        vector<vector<string>> result;
        for (auto item : myMap) {
            result.push_back(item.second);
        }
        
        return result;
    }
};