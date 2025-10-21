#include <bits/stdc++.h>
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
  cin >> n >> m;
  vector<int> ls(n);
  a = 0, b = 0, c = 0;
  for (int i = 0; i < n; i++) {
    cin >> ls[i];
    if (ls[i] < 0) {
      a++;
    }
    if (ls[i] > 0) {
      b++;
    }
    if (ls[i] == 0) {
      c++;
    }
  }

  int ans;
  //   if (c && m >= b) {
  //     cout << abs(m - b) << endl;
  //     return;
  //   }
  if (a > 1) {
    if (a - 1 >= max(0ll, m - b)) {
      ans = abs(m - b);

    } else {
      ans = -1;
    }

  } else if (a == 1) {
    if (m <= b) {
      ans = abs(m - b);
    } else {
      ans = -1;
    }
  } else {
    if (m == b) {
      ans = 0;
    } else if (b >= m && c) {
      ans = b - m;
    } else {
      ans = -1;
    }
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
