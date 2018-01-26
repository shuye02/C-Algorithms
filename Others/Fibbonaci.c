//Fibonacci
#include <stdio.h>
#define maxn 100
long long f[maxn];
long long fib(int n){
    if (f[n]>=0) {
        return f[n];
    }else{
        f[n]=fib(n-1)+fib(n-2);
        return f[n];
    }


}
int main(int argc, char const *argv[]) {
    f[1]=1;
    f[2]=1;
    int n;
    scanf("%d", &n);
    for (int i = 3; i <= n; i++) {
        f[i]=-1;
    }
    long long ans;
    ans=fib(n);
    printf("%lld\n", ans);
    return 0;
}
