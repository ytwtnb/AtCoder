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
  ll n, m;
  cin >> n >> m;

  if (n > 2 && m > 2) {
    cout << (n - 2) * (m - 2) << endl;
  } else {
    if (n == 1 && m == 1) {
      cout << 1 << endl;
    } else if (n == 1) {
      cout << m - 2 << endl;
    } else {
      cout << n - 2 << endl;
    }
  }

  return 0;
}
