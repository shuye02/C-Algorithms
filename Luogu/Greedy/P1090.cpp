// https://www.luogu.org/problemnew/show/P1090
// Greedy Algorithms
// priority_queue

#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int> > piles;

int main() {
    int ans = 0;
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        piles.push(in);
    }

    for (int i = 0; i < n-1; i++) {
        int a, b;
        a = piles.top(); piles.pop();
        b = piles.top(); piles.pop();

        // cout << a << " " << b << endl;
        ans += (a+b);
        piles.push(a+b);
    }

    cout << ans << endl;
    return 0;
}
