#include <stdio.h>

#define LOWER 0
#define UPPER 100
#define STEP 10

/* print Celsius-Fahrenheit table
 * for celsius = 0, 10, ..., 100 */
int main() {
  printf("== Celsius to Fahrenheit ==\n");

  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  return 0;
}
