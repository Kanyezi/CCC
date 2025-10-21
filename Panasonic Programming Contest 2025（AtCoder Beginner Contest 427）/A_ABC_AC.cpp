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
    cin >> s;
    s.erase(s.begin()+s.size()/2);
    cout << s;
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