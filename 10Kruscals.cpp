#include <bits/stdc++.h>
using namespace std;
struct Edge {
    int u, v, w;
};
int find_parent(int v, vector<int>& parent) {
    if (parent[v] == v)
        return v;
    return parent[v] = find_parent(parent[v], parent);
}
void union_sets(int u, int v, vector<int>& parent, vector<int>& rank) {
    u = find_parent(u, parent);
    v = find_parent(v, parent);
    if (rank[u] < rank[v])
        parent[u] = v;
    else if (rank[v] < rank[u])
        parent[v] = u;
    else {
        parent[u] = v;
        rank[v]++;
    }
}
vector<Edge> kruskal_mst(vector<Edge>& edges, int n) {
    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.w < b.w;
    });
    vector<int> parent(n), rank(n);
    for (int i = 0; i < n; i++)
        parent[i] = i;

    vector<Edge> mst;
    for (Edge e : edges) {
        if (find_parent(e.u, parent) != find_parent(e.v, parent)) {
            union_sets(e.u, e.v, parent, rank);
            mst.push_back(e);
        }
    }
    return mst;
}
int main() {
    int n, m;
    cout << "Enter the number of vertices and edges: ";
    cin >> n >> m;
    vector<Edge> edges(m);
    cout << "Enter the edges of the graph with their weights:\n";
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges[i] = {u, v, w};
    }
    vector<Edge> mst = kruskal_mst(edges, n);
    cout << "Minimum Spanning Tree:\n";
    for (Edge e : mst)
        cout << e.u << " - " << e.v << " : " << e.w << '\n';
    return 0;
}
