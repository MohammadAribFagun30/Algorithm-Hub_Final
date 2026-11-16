#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj[n + 1];

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> visited(n + 1, 0);

    queue<int> q;

    int start;
    cin >> start;

    q.push(start);
    visited[start] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int x : adj[node])
        {
            if (visited[x] == 0)
            {
                visited[x] = 1;
                q.push(x);
            }
        }
    }

    return 0;
}