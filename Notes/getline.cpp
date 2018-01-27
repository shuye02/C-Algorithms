#include <iostream>
#include <string>
using namespace std;

int main(){
    // Declare Var
    string a, b;

    // std::cin reads everything in the buffer entil
    // it encounters blank space or new line (\n)
    // This Suggests that the '\n' REMAINS in the Buffer
    cin >> a;
    getchar();
    // Hence We Need to Use getchar() to read the \n Character
    // Otherwise the getline() Would Read the '\n' And Stop
    getline(cin, b);

    return 0;
}
