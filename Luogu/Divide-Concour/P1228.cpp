// https://www.luogu.org/problemnew/show/P1226
// 快速幂
#include <bits/stdc++.h>
using namespace std;

int b, p, k;
int ans = 0;

int rmod(int n) {
    if (n == 0) {
        return 1;
    }
    int temp;

    temp = rmod(n/2) % k;
    temp = (temp * temp) % k;
    if (n % 2 == 1) {
        temp = (temp*b) % k;
    }
    return temp;
}

int main() {
    cin >> b >> p >> k;

    int origb = b;
    b %= k;

    ans = rmod(p);
    cout << origb << "^" << p << " mod " << k << "=" << ans << endl;

    return 0;
}
