bool dfs_helper(const Grafo& g, int start, int target, vector<int>& visitati){
    if (start==target) return true;
    visitati[start]=1;
    int n=g.n();
    for (int v=0; v<n; v++){
        if (g(start, v) && visitati[v]==0){
            if (dfs_helper(g, v, target, visitati)) return true;
        }
    }
    return false;
}


bool dfs(const Grafo& g, int s, int t){
    int n=g.n();
    vector<int> visitati(n, 0);
    return dfs_helper(g, s, t, visitati);
}
