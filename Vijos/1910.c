// 计数问题
// https://www.vijos.org/p/1848
// RAM: KiB
// Time taken: ms

#include <stdio.h>
#include <math.h>
int main() {
    int n, m;
    scanf("%d %d\n", &n, &m);
    int a[n+1];
    for (int i = 0; i < n; i++) {
        scanf("%d\n", &a[i]);
    }
    int x[m+1], xnum=0;
    for (int i = 1; i <= m; i++) {
        printf("%d\n", i);
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[j]*pow(i,j);
            printf("sum:%d\n", sum);
        }
        if (sum == 0) {
            x[xnum] = i;
            xnum ++;
        }
    }
    printf("%d\n", xnum);
    for (int i = 0; i <= xnum; i++) {
        printf("%d\n", x[i]);
    }
    return 0;
}
