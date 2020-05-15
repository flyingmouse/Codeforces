#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <utility>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <bitset>
#include <numeric>
#include <cassert>
using namespace std;

#define REPP(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,a) for(int i = 0; i < (a); ++i)
#define PER(i,a) for(int i = (a) - 1; i >= 0; --i)
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(), (x).end()
#define MP make_pair

typedef long long ll;
typedef pair<int, int> pii;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  REP(i, n) cin >> a[i] >> b[i];
  set<pii> st;
  REP(i, n) REP(j, n) if (a[i] > a[j] && b[i] < b[j]) {
    int r = a[i] - a[j];
    int s = b[j] - b[i];
    int g = gcd(r, s);
    st.insert(MP(r / g, s / g));
  }
  cout << st.size() + 1 << endl;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  int T;
  cin >> T;
  REP(i, T) {
    cout << "Case #" << i + 1 << ": ";
    solve();
  }
  return 0;
}
