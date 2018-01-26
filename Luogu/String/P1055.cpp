// P1055 ISBN号码
// https://www.luogu.org/problemnew/show/P1055
#include <stdio.h>

int main(){
        // Gets the isbn String Input
        char isbn[13];
        gets(isbn);

        // Calculate the Verify Code
        int verify = 0;
        verify += (isbn[0]-'0') * 1;
        for (int i = 2; i <= 4; i++) {
            verify += (isbn[i] - '0') * (i);
        }
        for (int i = 6; i <= 10; i++) {
            verify += (isbn[i] - '0') * (i - 1);
        }
        verify = verify % 11;

        // Translate the int Verify Code into Char
        char verify_code;
        if (verify == 10) {
            verify_code = 'X';
        } else {
            verify_code = verify + '0';
        }

        // Output
        if (verify_code == isbn[12]) {
            puts("Right");
        } else {
            isbn[12] = verify_code;
            puts(isbn);
        }
        return 0;
}
