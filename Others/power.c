#include <stdio.h>
#include <string.h>
#define length 500

struct bigint{
    int pct[2*length];
};

struct bigint times(struct bigint a, struct bigint b){
    struct bigint temp, product;
    //int temp[length+2],product[2*length+1];
    memset(product.pct,0,sizeof(product.pct));
    for (int i = 0; i < length; i++) {
        for (int j = length-1; j >= 0; j--) {
            temp.pct[j]=a.pct[i]*b.pct[j];
        } //相乘
        for (int j = 0; j < length; j++) {
            product.pct[i+j] += temp.pct[j];
        }
    }
    for (int j = 0; j < 2*length; j++) {
        product.pct[j+1] += product.pct[j]/10;
        product.pct[j] %= 10;
    }
    return product;
}

struct bigint pow2(int n){
    if (n==0) {
        struct bigint ans;
        memset(ans.pct,0,sizeof(ans.pct));
        ans.pct[0] = 1;
        return ans;
    } else if (n%2==0) {
        struct bigint temp=pow2(n/2);
        return times(temp, temp);
    } else {
        struct bigint temp=pow2(n/2);
        temp = times(temp, temp);
        struct bigint two;
        memset(two.pct,0,sizeof(two.pct));
        two.pct[0]=2;
        return times(temp,two);
    }
}
int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);

    // estimate digits
    int digit=0;
    digit=n*0.301029995663981195;
    digit++;
    printf("%d\n", digit);

    struct bigint ans = pow2(n);

    ans.pct[0]--;

    for (int i = length-1; i >= 0; i--) {
        printf("%d", ans.pct[i]);
        if ( (i) % 50 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
