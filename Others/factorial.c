#include <stdio.h>
int fact(int n){
    if (n==1) {
        return 1;
    }
    return n*fact(n-1);
}
int main() {
    int n=1;
    scanf("%d", &n);
    int ans=0;
    ans=fact(n);
    printf("%d\n", ans);
    return 0;
}
