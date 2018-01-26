// P1427 小鱼的数字游戏
// https://www.luogu.org/problemnew/show/P1427
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> num;

    // Reads Input
    while (true){
        int n;
        cin >> n;
        if (n) {
            num.push(n);
        } else {
            break;
        }
    }

    // Output
    while (!num.empty()){
        cout << num.top() << " ";
        num.pop();
    }
    cout << endl;
    
    return 0;
}
