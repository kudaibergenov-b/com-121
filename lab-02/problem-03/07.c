#include <stdio.h>

#define FIRST_ASCII_SYM 33
#define LAST_ASCII_SYM 126
#define ROW_LENGTH 16

int main(void) {
        for (int i = FIRST_ASCII_SYM, j = 1; i <= LAST_ASCII_SYM; i++, j++) {
                putchar(i);
        if ( j % ROW_LENGTH == 0 ) {
        putchar('\n');
	}
}
        return 0;
}
