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
  char a, b, ans;
  cin >> a >> b;

  if (a == 'H') {
    if (b == 'H') {
      ans = 'H';
    } else {
      ans = 'D';
    }
  } else {
    if (b == 'H') {
      ans = 'D';
    } else {
      ans = 'H';
    }
  }

  cout << ans << endl;
  
  return 0;
}
