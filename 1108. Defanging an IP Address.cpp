class Solution {
public:
    string defangIPaddr(const string &x) {
        string r;
        for(int i = {}; i < (int)x.size(); ++i) {
            if(x[i] != '.' && x[i + 1] == '.' && i + 1 < (int)x.size()) {
                r.push_back(x[i]);
                r.push_back('[');
                r.push_back(x[i + 1]);
                r.push_back(']');
                ++i;
            } else {
                r.push_back(x[i]);
            }
        }
        return r;
    }
};
