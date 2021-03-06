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
using namespace std;

#define REPP(i,a,b) for(int i=(a); i < (b); ++i)
#define REP(i,a) for(int i = 0; i < (a); ++i)
#define PER(i,a) for(int i = (a) - 1; i >= 0; --i)
#define SIZE(x) ((int)(x).size())
#define ALL(x) (x).begin(), (x).end()
#define MP make_pair

typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int k, a, b;
    cin >> k >> a >> b;
    int c = max(a, b), d = min(a, b);
    if (c < k) return !printf("-1\n");
    if (c % k != 0 && d < k) return !printf("-1\n");
    int ans = a / k + b / k;
    cout << ans << endl;
    return 0;
}
