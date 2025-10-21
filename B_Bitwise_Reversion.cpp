#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int,int>
#define Vi vector<int>
int n,m,num,k,a,b,c,d,sum=0;
const int NE=10000;
string ss,s;
char cc;

void slove(){
    ll x,y,z,c,a,b;
    cin >> x >> y >> z;
    for (int i = 0; i < 32; i++)
    {
        ll ti = (1<<i);
        if(((y&ti) && (z&ti)) && !(x&ti)){
            cout << "NO\n";
            return;
        }
    }
    c=z&y;
    
    a=(x|(z&c)),b=(x|(y&c));
    cout << a << ' ' << b << ' ' << c << ' ';
    if(a&b!=x || a&c!=z || b&c!=y){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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