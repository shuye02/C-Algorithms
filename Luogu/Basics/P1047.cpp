// P1047 校门外的树
// https://www.luogu.org/problemnew/show/P1047
#include <iostream>
using namespace std;

int main(){
    // Input L, M
    int L, M;
    cin >> L >> M;

    // Init Road, 1 for each tree
    int road[L+1];
    for (int i = 0; i <= L; i++) {
        road[i] = 1;
    }

    for (int i = 0; i < M; i++) {
        // Input Range to Remove
        int begin, end;
        cin >> begin >> end;

        // Remove Trees
        for (int j = begin; j <= end; j++) {
            road[j] = 0;
        }
    }

    int ans = 0;
    for (int i = 0; i <= L; i++) {
        ans += road[i];
    }
    cout << ans << endl;
}
