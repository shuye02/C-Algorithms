// https://www.luogu.org/problemnew/show/P1010
#include <bits/stdc++.h>
using namespace std;

void subst(int n) {
    int sub = 0; // iterable
    // Find the exponents of 2
    while (pow(2,sub) <= n) {
        sub++;
    }
    sub--; // Subtract the Added One in the last iteration

    // Output
    if (sub == 0) {
        cout << "2(0)";
    } else if (sub == 1) {
        cout << "2";
    } else {
        cout << "2(";
        subst(sub);
        cout << ")";
    }

    // Continue to Calculate the Remaining
    n -= pow(2,sub);
    if (n != 0) {
        cout << "+";
        subst(n);
    }
}

int main() {
    int n;
    cin >> n;

    subst(n);
    cout << endl;

    return 0;
}
