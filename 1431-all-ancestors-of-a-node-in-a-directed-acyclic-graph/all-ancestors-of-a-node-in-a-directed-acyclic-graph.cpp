class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n), ans(n);
        for (auto& e : edges) adj[e[1]].push_back(e[0]);
        for (int i = 0; i < n; i++) {
            vector<int> vis(n, 0);
            set<int> ancestors;
            dfs(i, adj, ancestors, vis);
            ans[i] = vector<int>(ancestors.begin(), ancestors.end());
        }
        return ans;
    }

    void dfs(int node, vector<vector<int>>& adj, set<int>& ancestors, vector<int>& vis) {
        vis[node] = 1;
        for (auto& next : adj[node]) {
            if (!vis[next]) {
                dfs(next, adj, ancestors, vis);
            }
            ancestors.insert(next);
        }
    }
};
