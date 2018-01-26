// P1089 津津的储蓄计划
// https://www.luogu.org/problemnew/show/P1089
#include <iostream>
using namespace std;
int main(){
    int money = 0, stored_money = 0, cost;
    for (size_t i = 1; i < 13; i++) {
        // Monthly Income and Costs
        money += 300;
        cin >> cost;
        money -= cost;

        if (money < 0) {
            // Deficit Occurs
            cout << "-" << i << endl;
            return 0;
        } else {
            // Gives Mum Surplus Money
            stored_money += money / 100;
            money = money % 100;
        }
    }

    // Print the Money Left
    cout << stored_money * 120 + money << endl;

}
