// https://www.vijos.org/p/1786
// RAM: 256.0 KiB
// Time taken: 2 ms
// 时间复杂度：O(sqrt(n))

#include <stdio.h>
#include <math.h>
int main() {
    int n, ans=0;
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) { //判断能否被整除
            ans = n / i; //获得较大的那个质数
        }
    }
    printf("%d\n", ans);
    return 0;
}
