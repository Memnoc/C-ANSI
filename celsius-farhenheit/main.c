#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for celsius = 0, 10, ..., 100 */
int main() {
    printf("== Celsius to Fahrenheit ==\n");

    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
