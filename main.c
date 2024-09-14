#include <stdio.h>
#include <math.h>

int main() {
  float x = 0, y = 0;

  printf("x = ");
  scanf("%f", &x);

  printf("y = ");
  scanf("%f", &y);

  float z1 = powf(cosf(x), 4) +
    powf(sin(y), 2) +
    0.25 * powf(sin(2 * x), 2) - 1;

  float z2 = sin(x + y) * sin(x - y);

  printf("z1 = %g, z2 = %g\n", z1, z2);
  return 0;
}

