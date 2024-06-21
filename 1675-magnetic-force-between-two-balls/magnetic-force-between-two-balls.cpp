class Solution {
public:
    int maxDistance(vector<int>& p, int m) {
        sort(p.begin(), p.end());
        int l = 1, r = p.back() - p.front();
        while(l < r) {
            int mid = r - (r - l) / 2;
            if(canPlaceBalls(p, m, mid)) {
                l = mid;
            } else{
                r = mid - 1;
            }
        }
        return l;
    }
    
private:
    bool canPlaceBalls(vector<int>& p, int m, int d) {
        int c = 1, lp = p[0];
        
        for(int i = 1; i < p.size(); ++i) {
            if(p[i] - lp >= d) {
                c++;
                lp = p[i];
                if (c >= m) {
                    return true;
                }
            }
        }
        
        return false;
    }
};