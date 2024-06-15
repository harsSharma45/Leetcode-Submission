class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
        int n = p.size();
        vector<pair<int, int>> prj;

        for (int i = 0; i < n; ++i) {
            prj.emplace_back(c[i], p[i]);
        }

        sort(prj.begin(), prj.end());

        priority_queue<int> pq;
        int i = 0;

        for (int j = 0; j < k; ++j) {
            while (i < n && prj[i].first <= w) {
                pq.push(prj[i].second);
                i++;
            }

            if (pq.empty()) {
                break;
            }

            w += pq.top();
            pq.pop();
        }

        return w;
    }
};
