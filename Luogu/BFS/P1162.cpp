// https://www.luogu.org/problemnew/solution/P1162
// BFS
#include <cstdio>
#include <iostream>
#include <queue>
#define maxn 31
using namespace std;

int n = 0; // Number of rows and columns
int inMap[maxn][maxn]; // Input Map
bool isOut[maxn][maxn] = {false}; // Whether to print 2
queue <pair<int, int> >  que;

void bfs(int x, int y) {
    isOut[x][y] = true;

    que.push(make_pair(x,y));
    while (!que.empty()) {
        pair <int, int> temp = que.front();
        que.pop();
        int row = temp.first;
        int col = temp.second;

        if (isOut[row+1][col] == false && row != n && inMap[row+1][col] == 0) {
            isOut[row+1][col] = true;
            que.push(make_pair(row+1,col));
        }
        if (isOut[row-1][col] == false && row != 1 && inMap[row-1][col] == 0) {
            isOut[row-1][col] = true;
            que.push(make_pair(row-1,col));
        }
        if (isOut[row][col+1] == false && row != n && inMap[row][col+1] == 0) {
            isOut[row][col+1] = true;
            que.push(make_pair(row,col+1));
        }
        if (isOut[row][col-1] == false && row != 1 && inMap[row][col-1] == 0) {
            isOut[row][col-1] = true;
            que.push(make_pair(row,col-1));
        }
    }

}

int main() {
    // Input and Formatting Data
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> inMap[i][j];
            if (inMap[i][j] == 1) {
                isOut[i][j] = true;
            }
        }
    }

    // Finding the Edges of the Map
    for (int i = 1; i <= n; i++) {
        if (isOut[1][i] == false) {
            bfs(1,i);
        }
    } // Upper Edge
    for (int i = 1; i <= n; i++) {
        if (isOut[n][i] == false) {
            bfs(n,i);
        }
    } // Lower Edge
    for (int i = 1; i <= n; i++) {
        if (isOut[i][1] == false) {
            bfs(i,1);
        }
    } // Left Edge
    for (int i = 1; i <= n; i++) {
        if (isOut[i][n] == false) {
            bfs(i,n);
        }
    } // Right Edge

    // Output Data
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (isOut[i][j] == false) {
                cout << "2" << " ";
            } else {
                cout << inMap[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
