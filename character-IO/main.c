#include <stdio.h>

int main() {
    printf("== File copying == \n");
    /* copy input to output: 1st version */

    int c;

    // Print the value of EOF
    printf("EOF value: %d\n", EOF); 

    while (1) {
        c = getchar();
        int result = (c != EOF);
        printf("getchar() != EOF: %d\n", result); // Print the result of the expression
        if (result == 0) {
            break; // Break the loop if EOF is encountered
        }
        putchar(c);
    }

    return 0;
}
