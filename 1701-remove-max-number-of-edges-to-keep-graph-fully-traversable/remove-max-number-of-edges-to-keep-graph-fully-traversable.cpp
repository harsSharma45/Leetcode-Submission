class DSU {
public:
    vector<int> parent, rank;
    DSU(int n) : parent(n), rank(n, 1) {
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int x) {
        if (x != parent[x]) parent[x] = find(parent[x]);
        return parent[x];
    }
    bool unite(int x, int y) {
        int xr = find(x), yr = find(y);
        if (xr == yr) return false;
        if (rank[xr] < rank[yr]) swap(xr, yr);
        parent[yr] = xr;
        if (rank[xr] == rank[yr]) rank[xr]++;
        return true;
    }
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        DSU dsuA(n+1), dsuB(n+1);
        int removed = 0, edgesUsed = 0;
        for (auto& e : edges)
            if (e[0] == 3)
                if (dsuA.unite(e[1], e[2])) {
                    dsuB.unite(e[1], e[2]);
                    edgesUsed++;
                } else removed++;
        for (auto& e : edges)
            if (e[0] == 1)
                if (dsuA.unite(e[1], e[2])) edgesUsed++;
                else removed++;
            else if (e[0] == 2)
                if (dsuB.unite(e[1], e[2])) edgesUsed++;
                else removed++;
        for (int i = 2; i <= n; i++)
            if (dsuA.find(i) != dsuA.find(1) || dsuB.find(i) != dsuB.find(1))
                return -1;
        return removed;
    }
};
