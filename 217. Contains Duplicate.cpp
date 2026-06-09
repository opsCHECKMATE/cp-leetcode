class Solution {
public:
    bool containsDuplicate(const vector<int>& x) {
        unordered_map<int, int> mp;
        for(auto i: x) {
            mp[i]++;
        }
        for(auto i: mp) {
            if(i.second > 1) {
                return true;
            }
        }
        return false;
    }
};
