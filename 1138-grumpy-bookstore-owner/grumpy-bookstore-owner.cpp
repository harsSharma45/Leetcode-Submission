class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int n = c.size(), s = 0, ma = 0, ca = 0;
        for (int i = 0; i < n; ++i) {
            if (g[i] == 0) {
                s += c[i];
            }
        }
        for (int i = 0; i < n; ++i) {
            if (g[i] == 1) {
                ca += c[i];
            }
            if (i >= m && g[i - m] == 1) {
                ca -= c[i - m];
            }
            ma = std::max(ma, ca);
        }
        return s + ma;
    
    }
};