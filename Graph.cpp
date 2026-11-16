#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[105][100005];
ll vis[105][100005];
int cnt = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    
    vector<pair<int, int>> adj[n + 1];
    int arr[n + 1][n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        arr[u][v] = w;

        adj[u].push_back({v, w});
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << "->";
        for (auto x : adj[i])
        {
            cout << "(" << x.first << "," << x.second << ") ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}