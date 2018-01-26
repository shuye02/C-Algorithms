// 打印杨辉三角
// 数据类型：二维数组
// 实现方法：利用一个数等于上一行相邻数字之和的性质
// 时间复杂度：O(n^2)

#include <stdio.h>
int main() {
    int n; //n行
    scanf("%d", &n);
    int ans[n][n]; //二维数组
    for (int i = 0; i <= n-1; i++) {
        ans[i][0]=1; //第一位为1
        ans[i][i]=1; //最末位为1
        if (i>=2) {
            for (int j = 1; j <= i-1; j++) {
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j]; //中间项等于上一行相邻项之和
            }
        }
    }
    for (int i = 0; i <= n-1; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", ans[i][j]); //打印一行内的数字
        }
        printf("\n"); //换行
    }
    return 0;
}
