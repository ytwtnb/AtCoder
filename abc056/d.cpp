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

int a[5001];

int main() {
  int n, k;
  cin >> n >> k;

  REP(i, n) {
    cin >> a[i];
  }

  sort(a, a+n, greater<int>());

  int need_count = 0;

  REP(i, n) {
    ll sum = 0;
    for (int j = i; j < n; ++j) {
      sum += a[j];
      if (sum >= k) {
	need_count = j + 1; // TODO: このカードを抜いて次以降のものを足して条件を満たした場合?
	break;
      }
    }
  }

  cout << n - need_count << endl;

  return 0;
}
