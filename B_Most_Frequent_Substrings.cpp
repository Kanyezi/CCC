#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int, int>
#define Vi vector<int>
ll n, m, num, k, a, b, c, d, sum = 0;
const ll NE = 10000;
string ss, s;
char cc;

void slove() {
  cin >> n >> k >> s;
  string te = "";
  map<string, int> mp;
  int ma = 0;
  for (int i = 0; i < n; i++) {
    if (te.size() < k) {
      te += s[i];
    } else {
      te.erase(te.begin(), te.begin() + 1);
      te += s[i];
    }
    if (te.size() == k) {
      mp[te]++;
      ma = max(ma, mp[te]);
    }
  }
  cout << ma << endl;
  for (auto [x, y] : mp) {
    if (y == ma) {
      cout << x << " ";
    } else {
      continue;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // 不能使用printf,scanf
  int t = 1;
  // cin >> t;
  while (t--) {
    slove();
  }
  return 0;
}
