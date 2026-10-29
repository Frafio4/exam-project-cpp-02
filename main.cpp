bool f(const Grafo& g, int start, int target){
    if (start==target) return true;
    int n=g.n(); 
    vector<int> visitati(n, 0);
    queue<int> coda;
    visitati[start]=1;
    coda.push(start);
    while (!coda.empty()){
        int primo=coda.front();
        coda.pop();
        if (primo==target) return true;
        for (int v=0; v<n; v++){
            if (g(primo, v) && visitati[v]==0){
                visitati[v]=visitati[primo]+1;
                coda.push(v);
            }
        }
    }
    return false;
}

bool verifica_entrambi_cammini(const Grafo& g, int s, int t){
    bool cammino_1=f(g, s, t);
    bool cammino_2=f(g, t, s);
    if (cammino_1 && cammino_2) return true;
    return false;
}

