class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& x) {
        int n = (int)x.size();
        vector<int> nge(n, -1);
        stack<int> s;
        for(int i = (n<<1)-1; i>=0; --i) {
            while(!s.empty() && s.top() <= x[i%n]) {
                s.pop();
            }
            if(i < n && !s.empty()) {
                nge[i%n]=s.top();
            }
            s.push(x[i%n]);
        }
        return nge;
    }
};
