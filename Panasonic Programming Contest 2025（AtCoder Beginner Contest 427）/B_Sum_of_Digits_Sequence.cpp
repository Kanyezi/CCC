#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int,int>
#define Vi vector<int>
int n,m,num,k,a,b,c,d,sum=0;
const int NE=10000;
string ss,s;
char cc;
int js(int u){
    string r=to_string(u);
    int re=0;
    for (int i = 0; i < r.size(); i++)
    {
        re+=r[i]-'0';
    }
    return re;
}

void slove(){
    cin >> n;
    if(n==1 || n==0){
        cout << 1;
        return;
    }
    sum=1;
    for (int i = 1; i < n; i++)
    {
        sum+=js(sum);
    }
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