// https://www.luogu.org/problemnew/show/P1031
// Greedy Algorithm
// VERY Easy

#include <iostream>
#include <cstdio>
#define maxn 101
using namespace std;

int main() {
    // Input
    int N = 0, A[maxn]= {0};
    cin >> N;
    int avg = 0; //the average # of cards
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        avg += A[i];
    }

    avg /= N;
    for (int i = 0; i < N; i++) {
        A[i] -= avg;
    }

    // Processing
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == 0) {
            continue;
        } else {
            A[i+1] += A[i];
            ans++;
        }
    }

    cout << ans << endl;

}
