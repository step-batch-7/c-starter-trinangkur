#include<stdio.h>

unsigned char is_even(int number) {
  return number % 2 == 0;
}

unsigned char is_odd(int number) {
  return ! is_even(number);
}

int square(int number) {
  return number * number;
}

int cube(int number) {
  return number * square(number);
}

int GCD(int num1, int num2) {
  if (num1 == 0){
    return num2;
  }
  return GCD(num2 % num1, num1);
}

int main(void) {
  int number, num1, num2;
  printf("enter a number to check if it is even\n");
  scanf("%d", &number);
  printf("%d is %s \n", number, is_even(number) ? "even" : "Not even");
  printf("enter a number to check if it is odd\n");
  scanf("%d", &number);
  printf("%d is %s \n", number, is_odd(number) ? "odd" : "Not odd");
  printf("enter a number to find square of it\n");
  scanf("%d", &number);
  printf("square of %d is %d\n", number, square(number));
  printf("enter a number to find cube of it\n");
  scanf("%d", &number);
  printf("cube of %d is %d\n", number, cube(number));
  printf("enter two number separated by space to find gcd of them\n");
  scanf("%d %d", &num1, &num2);
  printf("GCD of %d and %d is %d\n", num1, num2, GCD(num1, num2));
}
