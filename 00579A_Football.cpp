#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x;
  cin >> x;

  int res = 0;
  while (x) {
    res += x % 2;
    x /= 2;
  }

  cout << res << endl;

  return 0;
}

// Problem: https://codeforces.com/problemset/problem/579/A
// Solution: https://codeforces.com/contest/579/submission/240007884
// Rating: 1000
