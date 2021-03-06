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

int n, a[30];

void solve() {
    cin >> n;
    REP(i, n) cin >> a[i];
    while (1) {
        vector<int> ans;
        int vmax = *max_element(a, a + n);
        if (vmax == 0) break;
        REP(i, n) if (a[i] == vmax) ans.push_back(i);
        if (ans.size() == 2) {
            printf("%c%c ", ans[0] + 'A', ans[1] + 'A'), a[ans[0]]--, a[ans[1]]--;
        } else printf("%c ", ans[0] + 'A'), a[ans[0]]--;
    }
    cout << endl;
}

int main() {
    int T; cin >> T;
    REP(i, T) {
        printf("Case #%d: ", i + 1);
        solve();
    }
    return 0;
}
