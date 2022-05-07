#include  <stdio.h>
#include <stdbool.h>

int main() {
        bool is_whitespace;
        char c = getchar();
        asm(
                "mov $0, %0;"
                "cmp $32, %1;"
                "jne L0;"
                "mov $1, %0;"
                "L0:"
                "cmp $9, %1;"
                "jne L1;"
                "mov $1, %0;"
                "L1:"
                : "+r"(is_whitespace)
                : "r"(c)
                :
        );

        if (is_whitespace) {
                puts("Whitespace");
        } else {
                puts("Not a whitespace");
        }

        return 0;
}
