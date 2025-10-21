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
  map<int, int> mp;
  for (int i = 0; i < 12; i++) {
    cin >> num;
    mp[num]++;
  }
  cin >> a >> b;
  if (mp[b] >= a) {
    cout << "lose\n";
  } else {
    cout << "win\n";
  }
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
