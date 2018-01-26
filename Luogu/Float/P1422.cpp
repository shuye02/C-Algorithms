// P1422 小玉家的电费
// https://www.luogu.org/problemnew/show/P1422

#include <iostream>
using namespace std;
int main(){
    // Input Quantity
    int quantity;
    cin >> quantity;

    double price;

    // Calculate Price
    if(quantity <= 150) {
        price = quantity * 0.4463;
    } else if (quantity > 150 && quantity <= 400) {
        price = 150 * 0.4463 + (quantity - 150) * 0.4663;
    } else {
        price = 150 * 0.4463 + (400 - 150) * 0.4663 + (quantity - 400) * 0.5663;
    }

    // Round to 10^-1 and Output
    price = int(price*10 + 0.5) / 10.0;
    cout << price << endl;
}
