#include <stdio.h>

int main() {
  int x = 5, y = 2;
  int sum = x + y;
  printf("The sum of %d and %d is %d\n", x, y, sum);

  float price = 4.50;
  printf("The price of a chocolate bar is %.2f\n", price); // Print price with two-decimal precision

  char letter = 'H';
  printf("My favorite letter is %c\n", letter);

  // Automatic type conversion
  float quotient = x / y;
  printf("The quotient of %d divided by %d is %f\n", x, y, quotient);

  // Explicit type conversion
  quotient = (float) x / y;
  printf("The quotient of %d divided by %d is %f\n", x, y, quotient);

  return 0;
}
