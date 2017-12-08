// https://www.vijos.org/p/1102
// RAM: 256.0 KiB
// Time taken: 2 ms
// 时间复杂度：O(n)

#include <stdio.h>
int main() {
    int apple[10];
    int h;
    int ans=0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &apple[i]);
    }
    scanf("%d", &h);
    h += 30;
    for (int i = 0; i < 10; i++) {
        if (apple[i]<=h) {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
