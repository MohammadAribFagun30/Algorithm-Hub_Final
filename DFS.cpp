#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];

int visited[100];

void dfs(int node) { 

    visited[node] = 1; 

    cout << node << " ";  

    for(int x : adj[node]) {  

        if(visited[x] == 0) {

            dfs(x);
        }
    }
}

int main() {

    int n, e;

    cin >> n >> e;

    for(int i = 0; i < e; i++) {

        int u, v;

        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cin >> start;

    dfs(start);

    return 0;
}