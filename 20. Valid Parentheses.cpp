class Solution {
public:
    bool isValid(const string x) {
        stack<char> s;
        for(char c : x) {
            if(c == '(' || c == '[' || c == '{') {
                s.push(c);
            } else {
                if(s.empty()) {
                    return false;
                }
                if((c == ')' && s.top() == '(') ||(c == ']' && s.top() == '[') ||(c == '}' && s.top() == '{')) {
                    s.pop();
                } else {
                    return false;
                }
            }
        }
        return s.empty();
    }
};
