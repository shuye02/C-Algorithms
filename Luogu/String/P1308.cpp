// P1308 统计单词数
// https://www.luogu.org/problemnew/show/P1308
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input
    string dict, input;
    getline(cin, dict);
    getline(cin, input);

    // Convert to Lower Case
    for (unsigned int i = 0; i < dict.size(); i++) {
        dict[i] = tolower(dict[i]);
    }
    for (unsigned int i = 0; i < input.size(); i++) {
        input[i] = tolower(input[i]);
    }

    // Add Blank Spaces to Avoid In-word Sameness
    dict = ' ' + dict + ' ';
    input = ' ' + input + ' ';

    // Find dict in input
    size_t found = input.find(dict);
    if (found == string::npos) {
        // If Not Found, Output -1
        cout << -1 << endl;
    } else {
        int ans = 0;

        // If Found, Calculate How Many
        while (found != string::npos) {
            ++ans;
            found = input.find(dict, found + 2);
        }

        // Output the Numbers Found and the position of First Appearance
        found = input.find(dict);
        cout << ans << " " << found << endl;
    }

    return 0;
}
