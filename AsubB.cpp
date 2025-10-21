#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <type_traits>
#include <vector>
using namespace std;
#define ll long long
#define PII pair<int, int>
#define Vi vector<int>
ll n, m, num, k, a, b, c, d, sum = 0;
const ll NE = 10000;
string ss, s;
char cc;

vector<int> ls, dw;
map<int, set<int>> mp;
bool js(int l, int r) {
  int s = -1;
  for (int i = l; i <= r; i++) {
    auto te = upper_bound(mp[ls[i]].begin(), mp[ls[i]].end(), s);
    if (*te >= l && *te <= r) {
      te = upper_bound(mp[ls[i]].begin(), mp[ls[i]].end(), r);
    }

    if (te != mp[ls[i]].end()) {
      s = *te;
    } else {
      return false;
    }
  }
  return true;
}

void slove() {
  cin >> n;
  ls.resize(n);
  dw.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> ls[i];
    mp[ls[i]].insert(i);
  }
  for (int i = 1; i < n - 1; i++) {
    if (mp[ls[i]].size() > 1) {
      dw[i] = 1;
      sum++;
    }
  }
  int l = -1;
  for (int i = 1; i < n - 1; i++) {
    if (!dw[i]) {
      l = -1;
      continue;
    }
    if (l == -1) {
      l = i;
    } else {
      for (int j = l; j < i; j++) {
        if (js(j, i)) {
          sum++;
        }
      }
    }
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
