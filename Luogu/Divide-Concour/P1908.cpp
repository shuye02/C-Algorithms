// https://www.luogu.org/problemnew/show/P1908
// 分治 归并排序

#include<bits/stdc++.h>
#define maxn 40001
using namespace std;

int seq[maxn], temp[maxn], ans = 0, n = 0;

void merge_sort(int left, int right) {
    // Define Recursive Margins
    if (left == right) {
        return;
    }
    int mid = (left+right)/2;
    merge_sort(left,mid);
    merge_sort(mid+1,right);

    // Merge Arrays
    int i = left, j = mid+1, k = left;
    while (i <= mid && j <= right) {
        if (seq[i] <= seq[j]) {
            temp[k] = seq[i];
            k++; i++;
        } else {
            temp[k] = seq[j];
            k++; j++;
            ans += (mid - i + 1); // It Counts the Number of Reverse Arrays Here
        }
    }
    while(i <= mid) {
        temp[k] = seq[i];
        k++; i++;
    }
    while(j <= right) {
        temp[k] = seq[j];
        k++; j++;
    }

    // Transfer sorted Data from temp[] to seq[]
    for(int i = left;i <= right;i++) {
        seq[i] = temp[i];
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> seq[i];
    }

    merge_sort(1,n);

    cout << ans << endl;
    return 0;
}
