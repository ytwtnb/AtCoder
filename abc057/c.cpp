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

ll n;

ll cnt_digits(ll n) {
  ll cnt = 0;
  while(n) {
    n /= 10;
    cnt++;
  }

  return cnt;
}

int main() {
  cin >> n;

  ll ans = INFLL;
  for (ll i = 1; i*i <= n; ++i) {
    if (n % i == 0) {
      ans = cnt_digits(n / i);
    }
  }

  cout << ans << endl;

  return 0;
}
