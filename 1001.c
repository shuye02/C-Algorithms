// 谁拿了最多奖学金
// https://www.vijos.org/p/1001
// RAM: 256.0 KiB
// Time Taken: 2ms

#include <stdio.h>
#include <string.h>

int main() {
    // freopen ("1001.txt","r",stdin); //输入测试数据
    int N = 0; // 学生总数
    scanf("%d", &N);
    // 定义输入
    char name[21];
    char official, west;
    int final, review, paper;
    // 定义运算中项
    int scholarship; // 每个学生获得的奖学金数量
    int total=0; // 总共获得的奖学金
    int maxscol = 0; // 获得的最高奖学金数量
    char maxname[21]; // 获得最多奖学金的学生姓名
    // for loop找出max，求total
    for (int i = 1; i <= N; i++) {
        scholarship = 0; // init
        // data input
        scanf("%s %d %d %c %c %d", name, &final, &review, &official, &west, &paper);
        // 计算颁奖
        if (final > 80 && paper >= 1) {
            scholarship += 8000;
        }; //院士奖学金
        if (final > 85 && review > 80) {
            scholarship += 4000;
        }; //五四奖学金
        if (final > 90) {
            scholarship += 2000;
        }; //成绩优秀奖
        if (west == 'Y' && final > 85) {
            scholarship += 1000;
        }; //西部奖学金
        if (official == 'Y' && review > 80) {
            scholarship += 850;
        }; //班级贡献奖
        total += scholarship; //求总颁发数量
        if (scholarship > maxscol) {
            maxscol = scholarship;
            strcpy(maxname, name);
        };
    }
    printf("%s\n%d\n%d\n", maxname, maxscol, total);
    return 0;
}
