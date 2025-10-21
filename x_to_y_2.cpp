#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int, int>
#define Vi vector<int>
ll n, m, num, x, y, k, a, b, c, d, sum = 0;
const ll NE = 10000;
string ss, s;
char cc;

void slove() {
  cin >> x >> y;
  sum = 0;
  while ((x | y) != y) {
    x /= 2;
    sum++;
  }
  if (x == y) {
    sum--;
  }
  cout << sum + 1 << endl;
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
