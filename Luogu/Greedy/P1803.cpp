// https://www.luogu.org/problemnew/show/P1803
// Greedy Algoritms
// VERY Easy
// 单位时间参加活动次数

#include <bits/stdc++.h>
using namespace std;

struct Match {
    int start;
    int end;
} M[1000000];

bool endFirst(Match a, Match b) {
    if (a.end < b.end) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> M[i].start >> M[i].end;
    }

    sort(M, M+n, endFirst);

    int end = 0;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(end <= M[i].start) {
            end = M[i].end;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
