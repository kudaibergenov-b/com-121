#include <stdio.h>

#define FIRST_ASCII_SYM 33
#define LAST_ASCII_SYM 126
#define ROW_LENGTH 16

int main(void) {
        int i = FIRST_ASCII_SYM;
        int j = 1;
        goto L2;
L0:
        putchar(i);
        if ( j % ROW_LENGTH != 0 ) {
        	goto L1;
        }
        putchar('\n');
L1:
        i = i + 1;
        j = j + 1;
L2:
        if (i <= LAST_ASCII_SYM) {
                goto L0;
        }
        return 0;
}
