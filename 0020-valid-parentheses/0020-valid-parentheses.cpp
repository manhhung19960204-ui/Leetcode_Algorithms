class Solution {
public:
    bool isOpen(char s) {
        switch(s) {
            case '(':
             return true;
            case '[':
             return true;
            case '{':
             return true;
            default:
            return false;
        }
    }
    bool isValid(string s) {
        stack<int> q;
        for(int i = 0 ; i < s.length(); i++) {
            if(isOpen(s[i])) {
                q.push(s[i]);
            } else {
                if(q.empty()) return false;
                if((s[i] == ')' && q.top() == '(') ||
                   (s[i] == ']' && q.top() == '[') ||
                   (s[i] == '}' && q.top() == '{')){
                    q.pop();
                } else {
                    return false; 
                }
            }
        }
        return q.empty();
    }
};