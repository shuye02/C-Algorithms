// P1421 小玉买文具
// https://www.luogu.org/problemnew/show/P1421
#include <iostream>
using namespace std;

int main(){
    // Input Money Has
    int a, b, money;
    cin >> a >> b;
    money = a * 10 + b;

    // Calculate Unit Price
    int uprice = 19;

    // Output
    cout << money / uprice << endl;
}
