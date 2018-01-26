// 对于n层的Tower of Hanoi，需要几步才能完成移动
// 并print出每一步的起始柱和目标柱

#include <stdio.h>

int n, moves = 0;

void move(int n, int from, int mid, int to){
    if (n == 0) {
        return;
        // 已完成移动
    }

    move(n-1, from, to, mid);
    // 将上方盘片从起始柱移到中间柱

    moves++;
    printf("Moves Disk #%d from Rod %d to Rod %d\n", n, from, to);
    // 将底部盘片从起始柱移到目标柱

    move(n-1, mid, from, to);
    // 将上方盘片从中间柱移到目标柱
}

int main(){
        printf("Input number of disks: ");
        scanf("%d", &n);

        move(n, 1, 2, 3);

        printf("At least %d moves should be made.\n", moves);
        return 0;
}
