// https://www.vijos.org/p/1131
// RAM: 256.0 KiB
// Time taken: 3ms
#include <stdio.h>
#include <math.h>

// 定义求2的n次方函数
int power2(int exp){
        int result = 1;
        while (exp>0) {
                result = result *2;
                exp--;
        }
        return result;
}

int main() {
        // 定义变量+输入
        int p, i = 2;
        int n = 1;
        int y0, x0 = 0;
        scanf("%d", &x0);
        scanf("%d", &y0);
        // 判断y0能否被x0整除，若不能，直接给出答案0
        if (y0 % x0 != 0) {
                printf("%d", 0);
                return 0;
        } else {
                p = y0 / x0;
                // printf("inital p=%d\n", p);
                // 对p进行质因数分解
                int result=0;
                while(p > 1 & i <= sqrt(p)+1) {
                        while(p % i == 0) {
                                if (n == 1) {
                                        result++;
                                        // printf("%d\n", i);
                                }
                                p /= i;
                                // printf("p=%d\n", p);
                                n++;
                        }
                        i++;
                        n=1;
                };
                // printf("final p=%d\n", p);
                int rresult=result;
                if (p!=1) {
                        rresult++;
                }
                //printf("Result=%d\n", rresult);
                // 求2的（质因数个数）次方
                int output=power2(rresult);
                printf("%d\n", output);
        }
        return 0;
}
