#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define PII pair<int, int>
#define Vi vector<int>
ll n, m, num, k, a, b, c, d, sum = 0;
const ll NE = 10000;
string ss, s;
char cc;
vector<string> ls;
string cen(string s) {
  reverse(s.begin(), s.end());
  ll n = s.size();
  vector<ll> a(n * 2 + 2);

  for (ll i = 0; i < n; i++) {
    ll cc = s[i] - '0';
    for (ll j = 0; j < n; j++) {
      ll te = cc * (s[j] - '0');
      a[i + j] += te % 10;
      a[i + j + 1] += te / 10;
    }
  }
  string c = "";
  for (int i = 0; i < n * 2 + 1; i++) {
    ll te = a[i];
    a[i] %= 10;
    a[i + 1] += te / 10;
    c = to_string(a[i]) + c;
  }
  while (c[0] == '0') {
    c.erase(c.begin(), c.begin() + 1);
  }
  return c;
}
void init() {
  for (ll i = 1; i <= 1000; i++) {
    string c=cen(to_string(i));
    cout << c << endl;
    ls.push_back(c);
  }
}
ll zhua(ll a, ll b) {
  s = to_string(a) + to_string(b);
  ll te = 0;
  for (auto &p : s) {
    te *= 10;
    te += p - '0';
  }
  return te;
}

void slove() {
  cin >> c >> d;
  string q=to_string(c) + to_string(c);
  string p=to_string(c) + to_string(c + d);
  cout << q << ' ' << p << endl;
  auto ia = lower_bound(ls.begin(), ls.end(), q);
  auto ib = upper_bound(ls.begin(), ls.end(), p);
  // for (auto i = ia; i != ib || i-ia<0; i++)
  // {
  //   cout << *i << ' ';
  // }
  // cout << endl;
  
  cout << ib - ia << endl << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // 不能使用printf,scanf
  int t = 1;
  cin >> t;
  init();
  s = cen("100");
  // cout << s;
  while (t--) {
    slove();
  }
  return 0;
}
