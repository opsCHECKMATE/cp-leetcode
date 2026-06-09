class Solution {
public:
    string removeDuplicates(const string x) {
        stack<char> s;
        string r;
        for(char c : x) {
            if(!s.empty() && s.top() == c) {
                s.pop();
            } else {
                s.push(c);
            }
        }
        while(!s.empty()) {
            r.push_back(s.top());
            s.pop();
        }
        reverse(r.begin(), r.end());
        return r;
    }
};
