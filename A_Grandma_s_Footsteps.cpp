#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int, int>
#define Vi vector<int>
ll n, m, s, x, num, k, a, b, c, d, sum = 0;
const ll NE = 10000;
char cc;

void slove() {
  cin >> s >> a >> b >> x;
  while (x > 0) {
    if (x >= a) {
      x -= a;
      sum += s * a;
    } else {
      sum += s * x;
      x = 0;
    }
    x -= b;
  }
  cout << sum;
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
