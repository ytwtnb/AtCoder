// 途中

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

int n, k;

// 余りmの個数
int solve(int m) {
  // a = pb + m

  return 0;
}

int main() {
  cin >> n >> k;
  ans = 0;
  
  for (int i = k; i <= n; ++i) {
    ans += solve(i);
  }

  cout << n << endl;

  return 0;
}
