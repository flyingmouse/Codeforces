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

const int maxn = 3005;
ll a[maxn], dp[maxn][maxn];

int main() {
    int n;
    cin >> n;
    REP(i, n) cin >> a[i];
    REPP(i, 1, n + 1) REP(j, n + 1 - i) {
        dp[j][j + i] = max(a[j] - dp[j + 1][j + i], a[j + i - 1] - dp[j][j + i - 1]);
    }
    cout << dp[0][n] << endl;
    return 0;
}
