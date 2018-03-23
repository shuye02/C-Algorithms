#include<iostream>
using namespace std;

char a[1024][2048];

int main() {
    int n = 0, width = 4;
    // The width of the first layer is 4
    // While the height is width/2 = 2
    cin >> n;

    // Init to blank space
    for (int i = 0;i < 1024; i++) {
        for (int j = 0; j < 2048; j++) {
            a[i][j]=' ';
        }
    }

    // The First Layer (Note that this is UPSIDE DOWN)
    // Line 0: /__\ ;
    // Line 1: /\ ;
    a[0][0] = a[1][1] = '/';
    a[0][1] = a[0][2] = '_';
    a[0][3] = a[1][2] = '\\'; // Need to escape the backslash character with another

    int cnt = 1; // This represents the working layer's number
    while(cnt < n) {
        for (int i = 0; i < width/2; i++) {
            for (int j = 0; j < width; j++) {
                // (width/2) is both the height of one pattern and the blank space required before the first pattern in the next line
                // Similarly, a[i][j + width] is the second pattern in the same line (Again, the matrix is UPSIDE DOWN)
                a[i + (width/2)][j + (width/2)] = a[i][j + width] = a[i][j];
            }
        }
        width *= 2; // Moving to the (cnt+1)th layer
        cnt++;
    }

    for (int i = (width/2 - 1); i >= 0; i--) {
        for(int j = 0; j < width; j++) {
            cout << a[i][j];
        }
        cout<<endl;
    }

    return 0;
}
