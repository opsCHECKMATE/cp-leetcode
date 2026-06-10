class Solution {
public:
    bool is_ok(const string &s) {
        int l = {}, r = (int)s.size() - 1;
        while (l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(const vector<string>& x) {
        for (int i = {}; i < (int)x.size(); ++i) {
            if (is_ok(x[i])) {
                return x[i];
            }
        }
        return "";
    }
};
