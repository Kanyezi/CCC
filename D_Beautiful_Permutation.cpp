#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int,int>
#define Vi vector<int>
ll n,m,num,k,a,b,c,d,sum=0;
const ll NE=10000;
string ss,s;
char cc;
ll query(int ty,int l,int r){
    ll x;
    cout << ty << ' ' << l << ' ' << r << flush << endl;
    cin >> x;
    return x;
}

void slove(){
    cin >> n;
    //二分找到l
    int l=1,r=n;
    while (l<r)
    {
        int mid = (l+r)>>1;
        ll a = query(1,1,mid);
        ll b = query(2,1,mid);

        if(a<b){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    
    r = query(2,1,n);
    r-=(n*(n+1))/2+1;

    cout << "!" << ' ' << l << ' ' << r + l << flush << endl;
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