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
    vector<int> A(n),B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    
    int ans=2;
    map<int,int> mp;
    //判断有没有相同的因子
    for (int i = 0; i < n; i++)
    {
        for(auto x:ls[A[i]]){
            if(mp[x]>0){
                ans=0;
            }
            mp[x]++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        //删掉自己
        for(auto x:ls[A[i]]){
            mp[x]--;
        }
        
        for(auto x:ls[A[i]+1]){
            if(mp[x]>0){
                ans=min(ans,1);
            }
        }
        
        //加回自己
        for(auto x:ls[A[i]]){
            mp[x]++;
        }
    }
    
    
    cout << ans << endl;
    
    
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 不能使用printf,scanf
    int t=1;
    init();
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}