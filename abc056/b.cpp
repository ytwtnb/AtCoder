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

int main() {
  int w, a, b, ans;
  cin >> w >> a >> b;
  if (a > b) {
    int tmp = a;
    a = b;
    b = tmp;
  }

  if (b <= a + w) {
    ans = 0;
  } else {
    ans = b - (a + w);
  }

  cout << ans << endl;

  return 0;
}
