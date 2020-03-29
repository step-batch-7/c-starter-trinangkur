#include<stdio.h>

unsigned long int factorial(int number) {
  unsigned long int fact = 1;
  for (int num = 1; num <= number; num++) {
    fact = fact * num;
  }
  return fact;
}


int main (void) {
  int number;
  printf("Enter a number to find factorial of it\n");
  scanf("%d", &number);
  printf("the factorial is %lu\n", factorial(number));
}