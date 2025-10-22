#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> edges[555555];
int n;
int bfs(int st, vector<int> &dist)
{
    for (int i = 1; i <= n; ++i) dist[i] = -1;
    queue<int> q;
    q.push(st);
    dist[st] = 0;
    int res = st;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        if (dist[u] > dist[res] || (dist[u] == dist[res] && u > res)) {
            res = u;
        }
        for (auto nex : edges[u]) {
            if (dist[nex] == -1) {
                dist[nex] = dist[u] + 1;
                q.push(nex);
            }
        }
    }
    return res;
}
signed main()
{
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    vector<int> dist1(n + 1), dist2(n + 1);
    int a = bfs(1, dist1);
    int b = bfs(a, dist1);
    bfs(b, dist2);
    for (int v = 1; v <= n; v++) {
        if (dist1[v] > dist2[v]) {
            cout << a << '\n';
        } else if (dist2[v] > dist1[v]) {
            cout << b << '\n';
        } else {
            cout << max(a, b) << '\n';
        }
    }
    return 0;
}