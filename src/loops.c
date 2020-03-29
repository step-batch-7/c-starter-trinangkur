#include<stdio.h>

unsigned long int factorial(int number) {
  unsigned long int fact = 1;
  for (int num = 1; num <= number; num++) {
    fact = fact * num;
  }
  return fact;
}

void print_fibonacci_series(int terms) {
  int num1 = -1, num2 = 1, term, sum;
  for (term = 1; term <= terms; term++) {
    sum = num1 + num2;
    num1 = num2;
    num2 = sum;
    printf("%d ", num2);
  }
  printf("\n");
}

int main (void) {
  int number;

  printf("Enter a number to find factorial of it\n");
  scanf("%d", &number);
  printf("the factorial is %lu\n", factorial(number));

  printf("find fibonacci series of n terms, enter value of n\n");
  scanf("%d", &number);
  print_fibonacci_series(number);
}