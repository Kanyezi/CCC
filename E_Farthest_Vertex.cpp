#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long
#define PII pair<int,int>
#define Vi vector<int>
ll n,m,num,k,a,b,c,d,sum=0;
const ll NE=10000;
string ss,s;
char cc;
// map<int,set<int>>mp;
vector<vector<int>> mp(500010);
int bfs(int st,vector<int> &dist){
    for (int i = 1; i <= n; i++)
    {
        dist[i]=-1;
    }
    queue<int> q;
    q.push(st);
    dist[st]=0;
    int res=st;
    
    while (!q.empty())
    {
        int u=q.front();
        q.pop();

        if(dist[u]>dist[res] || dist[u]==dist[res] && u>res){
            res = u;
        }
        
        for(int x:mp[u]){
            if(dist[x]==-1){
                dist[x]=dist[u]+1;
                q.push(x);
            }
        }
    }
    
    return res;
}

void slove(){
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    vector<int> dist1(n+1),dist2(n+1);
    //找到离1最远的a
    //找到离a最远的b
    int a=bfs(1,dist1);
    int b=bfs(a,dist1);
    //维护b的dist2
    bfs(b,dist2);
    //答案在a和b之间
    for (int i = 1; i <= n; i++)
    {
        if(dist1[i]>dist2[i]){
            cout << a << '\n';
        }else if(dist1[i]<dist2[i]){
            cout << b << '\n';
        }else{
            cout << max(a,b) <<  '\n';
        }
        
    }
    
    
}

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 不能使用printf,scanf
    int t=1;
    // cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}