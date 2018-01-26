// P1035 级数求和
// https://www.luogu.org/problemnew/show/P1035
#include <iostream>
using namespace std;

int main(){
    int n = 1, k;
    double sn = 1;

    cin >> k;

    while (sn <= k) {
        ++n;
        sn += 1.0 / n;
    }

    cout << n << endl;
}
