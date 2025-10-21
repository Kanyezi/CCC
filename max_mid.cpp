#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;
#define ll long long
#define PII pair<int, int>
#define Vi vector<int>
ll n, m, num, k, a, b, c, d, sum = 0;
const ll NE = 10000;
string ss, s;
char cc;

void slove() {
  cin >> n >> k;
  vector<int> ls(n);
  for (int i = 0; i < n; i++) {
    cin >> ls[i];
  }
  sort(ls.begin(), ls.end());
  int ans = INT_MAX;
  for (int i = k - 1; i < n; i++) {
    int te = ls[i] - ls[i - (k) / 2];
    ans = min(ans, te);
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // 不能使用printf,scanf
  int t = 1;
  cin >> t;
  while (t--) {
    slove();
  }
  return 0;
}
