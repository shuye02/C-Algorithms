// https://www.luogu.org/problemnew/show/P1181
// Greedy Algorithms
// VERY Basic

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, max, ans = 0;

    cin >> n >> max;

    int temp = 0, sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> temp; // Reading in the new length
        sum += temp; // Adding the new length to the existed segment
        if (sum > max) { // segment maximum length exceeded
            ans++; // New segment
            sum = temp; // the new length should be the first constituent of the new segment
        }
    }

    ans++; // Adding up the last segment (which hasn't exceeded the maximum length)
    cout << ans << endl;

    return 0;
}
