class Solution {
public:
    int64_t reverseDegree(string s) {
        int64_t x = {};
        for(int i = {}; i < (int)s.size(); ++i) {
            x += ((123 - s[i]) * (1+i));
        }
        return x;
    }
};
