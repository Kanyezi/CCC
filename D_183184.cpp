#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int,int>
#define Vi vector<int>
ll n,m,num,k,a,b,c,d,sum=0;
const ll NE=10000;
string ss,s;
char cc;
//sqrt向下取整
ll sqt(ll n){
    return sqrtl(n);
}

void slove(){
    ll c,d;
    cin >> c >> d;
    ll ans = 0;
    ll a=1,b=9,x=10;

    while (a<=c+d)
    {
        //范围在a+c*x,c+1+c*x之间
        //     b+c*x,c+d+c*x
        ll l=max(a,c+1)+c*x;
        ll r=min(b,c+d)+c*x;
        
        if(l<=r){
            ans+=sqt(r)-sqt(l-1);
        }
        
        a=a*10;
        b=b*10+9;
        x=x*10;
    }
    cout << ans << endl;
    
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 不能使用printf,scanf
    int t=1;
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}