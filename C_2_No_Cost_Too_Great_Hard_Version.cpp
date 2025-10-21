#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int,int>
#define Vi vector<int>
ll n,m,num,k,a,b,c,d,sum=0;
const ll NE=400010;
string ss,s;
char cc;
vector<vector<int>> ls(NE);
struct node
{
    ll a,b;
};
bool cmp(const node& a,const node& b){
    return a.b < b.b;
}

void init(){
    //初始化每个数字的质因数
    for (int i = 2; i < NE; i++)
    {
        
        if(!ls[i].empty()){
            continue;
        }
        for (int j = i; j < NE; j+=i)
        {
            ls[j].push_back(i);
        }
    }
}
void slove(){
    cin >> n;
    vector<node> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i].a;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> h[i].b;
    }
    sort(h.begin(),h.end(),cmp);
    
    ll ans=h[0].b + h[1].b;

    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        for (auto x:ls[h[i].a])
        {
            if(mp[x]>0){
                ans=0;
            }
            mp[x]++;
        }
    }
    //检查加一的
    
    for (int i = 0; i < n; i++)
    {
        for (auto x:ls[h[i].a]){
            mp[x]--;
        }
        
        for(auto x:ls[h[i].a+1]){
            if(mp[x]>0){
                ans=min(ans,h[i].b);
            }
        }

        for(auto x:ls[h[i].a]){
            mp[x]++;
        }
    }

    //使用最小的链接
    ll val = h[0].a;
    ll cost = h[0].b;
    for (int i = 1; i < n; i++)
    {
        for (auto x:ls[h[i].a])
        {
            ll num = x-(val%x);
            if(num == x){
                num=0;
            }
            ans = min(1ll*ans,1ll*num*cost);
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 不能使用printf,scanf
    int t=1;
    cin >> t;
    init();
    while (t--)
    {
        slove();
    }
    return 0;
}