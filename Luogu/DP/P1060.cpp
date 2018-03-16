// https://www.luogu.org/problemnew/show/P1060
// https://www.vijos.org/p/1317
// DP
// 01背包
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N, m;
    int v[25], p[25];
    cin >> N >> m;

    for (int i = 0; i < m; i++) {
        cin >> v[i] >> p[i];
    }

    int dp[30001] = {0}; // Equivalent to memset()

    // for (int i = 0; i < 10001; i++) {
    //     dp[i] = 0; // init
    // }

    for (int i = 0; i < m; i++) {
        for (int j = N; j >= v[i]; j--) {
                dp[j] = max(dp[j], dp[j-v[i]] + p[i]); // DP
        }
    }

    cout << dp[N] << endl;

    return 0;
}
