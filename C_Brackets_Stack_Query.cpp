#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PII pair<int, int>
#define Vi vector<int>
ll n, q, m, num, k, a, b, c, d, sum = 0;
const ll NE = 10000;
string ss, s;
char cc;

void slove() {
  cin >> q;
  s = "";
  a = 0, b = 0;
  set<int> ls;
  int i = 0;
  while (q--) {
    cin >> num;

    if (num == 1) {
      cin >> cc;
      if (cc == '(') {
        a++;
        s += '(';
      } else {
        i++;
        if (a <= b) {
          ls.insert(i);
        }
        s += ')';
        b++;
      }
    } else {
      cc = s.back();
      s.pop_back();
      if (cc == '(') {
        a--;
      } else {
        b--;
        ls.erase(i);
        i--;
      }
    }
    // cout << a << ' ' << b << ' ' << ls.size() << ' ';
    // cout << s << endl;
    if (a == b && !ls.size()) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
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
