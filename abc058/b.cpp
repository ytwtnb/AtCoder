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
  string O, E;
  cin >> O >> E;

  int len = E.length();
  REP (i, len) {
    cout << O[i] << E[i];
  }
  if (O.length() > len) {
    cout << O[len];
  }
  cout << endl;

  return 0;
}
