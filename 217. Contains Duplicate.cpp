class Solution {
public:
    bool containsDuplicate(const vector<int>& a) {
        unordered_set<int> s;
        for (int x : a) {
            if (!s.insert(x).second) {
                return true;
            }
        }
        return false;
    }
};
