#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int,int>
#define Vi vector<int>
ll n,m,num,k,a,b,c,d,sum=0;
const ll NE=400010;
string ss,s;
char cc;
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
    
    int ans=h[0].b + h[1].b;

    map<int,int> 
    
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