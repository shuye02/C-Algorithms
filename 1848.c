// 计数问题
// https://www.vijos.org/p/1848
// RAM: 256.0KiB
// Time taken: 2-50ms

#include <stdio.h>
int ans = 0;

int main(){
    int n,x;
    scanf("%d%d", &n, &x);
    for(int i=1; i<=n; i++){
        int k = i; //k=i为[1:n]中的数字
        while (k != 0) {
            if (k % 10 == x) {
                ans++; //若k的末位出现x
            }
            k = k / 10; //去除k的末位
        }
    }
    printf("%d\n", ans);
    return 0;
}
