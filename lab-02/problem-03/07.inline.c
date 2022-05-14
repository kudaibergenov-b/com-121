#include <stdio.h>

#define FIRST_ASCII_SYM 33
#define LAST_ASCII_SYM 126
#define ROW_LENGTH 16

int main(void) {
        int i ;
        int j ;
        asm(
                "mov $33, %0;"
                "mov $1, %1;"
                "jmp L2;"
        "L0:"
           "mov %0, %%edi;"
           "call putchar;"
           "mov %1, %%eax;"
           "and $0xf, %%eax;"
           "jne L1;"
           "mov $10, %%edi;"
           "call putchar;"

        "L1:"
        "addl $1, %0;"
        "addl $1, %1;"

        "L2:"
        "cmpl $126, %0;"
        "jle L0;"

        ""
       : "+m"(i),
         "+m"(j)
        :
        : "eax", "edi"
        );
	return 0;
}
