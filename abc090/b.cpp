#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <string.h>
#include <vector>
using namespace std;

#define ll long long
#define INF (1 << 30)
#define INFLL (1LL << 60)

#define FOR(i,a,b) for(ll i = (a);i<(b);i++)
#define REP(i,a) FOR(i,0,(a))
#define MP make_pair

bool check(string str) {
  int n = str.size();
  REP(i, n/2) {
    if (str[i] != str[n-i-1]) {
      return false;
    }
  }
  return true;
}

int main() {
  int a, b;
  string ast, bst;
  cin >> a >> b;
  int ans = 0;

  for (int i = a; i <= b; ++i) {
    if (check(to_string(i))) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
