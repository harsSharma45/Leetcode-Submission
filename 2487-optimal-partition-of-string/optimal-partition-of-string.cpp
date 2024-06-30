class Solution {
public:
    int partitionString(string s) {
        vector<bool> vec(26, false);
        int ans = 1;
        for(char c:s) {
            int idx = c - 'a';
            if (vec[idx]) {
                ans++;
                fill(vec.begin(), vec.end(), false);
            }
            vec[idx] = true;
        }

        return ans;
    }
};