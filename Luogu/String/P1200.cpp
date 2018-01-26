// P1200 [USACO1.1]你的飞碟在这儿Your Ride Is Here
// https://www.luogu.org/problemnew/show/P1200

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input Strings str1 and str2
    string str1, str2;
    cin >> str1;
    cin >> str2;

    // Calculate the Numeric Products of the Strings
    int num1 = 1, num2 = 1;
    for (int i = 0; i < str1.length(); i++) {
        num1 *= (str1[i] - 64);
    }
    for (int i = 0; i < str2.length(); i++) {
        num2 *= (str2[i] - 64);
    }

    // Output
    if ((num1 % 47) == (num2 % 47)) {
        cout << "GO" << endl;
    } else {
        cout << "STAY" << endl;
    }
    return 0;
}
