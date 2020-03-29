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

void print_odd_series(int limit) {
  printf("Odd numbers between 1 and %d is :\n",limit);
  for(int odd = 1; odd <= limit; odd += 2){
    printf("%d ", odd);
  }
  printf("\n");
}

void print_even_series(int limit) {
  printf("even numbers between 1 and %d is :\n",limit);
  for(int even = 2; even <= limit; even += 2){
    printf("%d ", even);
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

  printf("enter a number to print all odd numbers between 1 and the given number\n");
  scanf("%d", &number);
  print_odd_series(number);
  
  printf("enter a number to print all even numbers between 1 and the given number\n");
  scanf("%d", &number);
  print_even_series(number);
}