#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int,int>
#define Vi vector<int>
ll n,m,num,k,a,b,c,d,sum=0;
const ll NE=10000;
string ss,s;
char cc;

void slove(){
    cin >> a >> b;
    set<ll> ls;
    for (int i = 0; i < 32; i++)
    {
        ll te = (1<<i);
        //bΪ1ʱΪa��ȡ��
        //bΪ0ʱΪa����ͬ
        //ֻȡ1��ʱ�� b-1 a-0
        //            b-0 a-1
        if((a&te)^(b&te)){
            ls.insert(te);
            if(te>a){
                cout << -1 << endl;
                return;
            }
        }
    }
    cout << ls.size() << endl;
    for(auto &p:ls){
        cout << p << ' ';
    }
    if(!ls.empty()) cout << endl;
    
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // ����ʹ��printf,scanf
    int t=1;
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}