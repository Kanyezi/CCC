#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int,int>
#define Vi vector<int>
ll n,m,num,k,a,b,c,d,sum=0;
const ll NE=10000;
string ss,s;
char cc;
vector<int> ls(200010);
vector<array<int,3>> v;
int get_left(int x){
    auto [pos,dir,val] = *lower_bound(v.rbegin(),v.rend(),array{x,0,0});
    if(!dir) return val;
    return val - ls[x];
}
int get_right(int x){
    return get_left(x)+ls[x];
}
void slove(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ls[i];
    }
    //编号,左端点/右端点,对齐端点
    v.push_back({n+1,0,0});
    int q;
    cin >> q;
    // cout << q << endl;
    while (q--)
    {
        int t,x;
        cin >> t >> x;
        if(t!=3){
            x--,t--;
            //表一定是递减的
            //合并x小于的编号
            while (v.back()[0] < x)
            {
                v.pop_back();
            }
            //添加新的规则
            v.push_back({x,t,t ? get_right(x):get_left(x)});
        }else{
            int l=0,r=n-1,ans=n;
            //二分查找
            while (l<=r)
            {
                int m=(l+r)>>1;
                int lm=get_left(m),rm=lm+ls[m];
                if(lm<=x && x<rm){
                    ans=m;
                    r=m-1;
                }else{
                    l=m+1;
                }
            }
            cout << n - ans << endl;
        }
    }
    
    
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