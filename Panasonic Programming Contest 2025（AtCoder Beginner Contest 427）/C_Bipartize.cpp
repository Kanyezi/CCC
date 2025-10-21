#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int,int>
#define Vi vector<int>
int n,m,num,k,a,b,c,d,sum=0,u,v;
const int NE=10000;
string ss,s;
char cc;
map<int,set<int>> mp;
vector<int> dre,ds;
set<PII> cd;
void dfs(int u,int num){
    cout << u << endl;
    for(auto &p:mp[u]){
        if(cd.find(minmax(u,p))!=cd.end()) continue;
        if(dre[p]) {
            cout << num << ' ' << ds[p] << ' ';
            cout << u << ' ' << p << endl;
            if((num-ds[p])%2)sum++;
            continue;
        };
        cd.insert(minmax(u,p));
        dre[p]=1;
        ds[p]=num;
        dfs(p,num+1);
    }
}

void slove(){
    cin >> n >> m;
    dre.resize(n+1,0);
    ds.resize(n+1,0);
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v;
        mp[u].insert(v);
        mp[v].insert(u);
    }
    ds[1]=0;
    dre[1]=1;
    dfs(1,0);
    cout << sum;
}

int main(){
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