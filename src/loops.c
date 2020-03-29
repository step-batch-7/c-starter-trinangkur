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

void print_multiplication_table(int multiplicand, int no_of_term) {
  printf("Multiplication Table of %d upto %d :\n",multiplicand,no_of_term);
  for(int multiplier = 1; multiplier <= no_of_term; multiplier++) {
    printf("%d x %d = %d\n", multiplicand, multiplier, multiplicand * multiplier);
  }
}

int sum_of_numbers(int start_num, int limit) {
  int sum = 0;
  for(int current_num = start_num; current_num < start_num + limit; current_num++) {
    sum += current_num;
  }
  return sum;
}

int product_of_numbers(int start_num, int limit) {
  int product = 1;
  for(int current_num = start_num; current_num < start_num + limit; current_num++) {
    product *= current_num;
  }
  return product;
}

void print_odd_in_range(int num1, int num2) {
  printf("Odd numbers between %d and %d are :",num1, num2);
  int odd = num1 % 2 == 0 ? num1 + 1 : num1;
  while(odd <=  num2) {
    printf("%d ",odd);
     odd += 2;
  }
  printf("\n");
}

void print_nth_numbers(int num1, int num2, int increment_value) {
  printf("%dth numbers between %d and %d are :\n", increment_value, num1, num2);
  for(int current = num1; current <= num2; current += increment_value) {
    printf("%d ",current);
  }
  printf("\n");
}

int sum_of_evens(int num1, int num2) {
  int sum = 0;
  int even = num1 % 2 == 0 ? num1 : num1 + 1;
  while(even <= num2) {
    sum += even;
    even += 2;
  }
  return sum;
}

void print_reverse_odds(int num) {
  printf("Odd numbers in reverse from %u to 1(inclusive)--\n",num);
  int odd = num % 2 != 0 ? num : num - 1;
  while(odd > 0)
  {
    printf("%d ",odd);
     odd -= 2;
  }
  printf("\n");
}

int main (void) {
  int number, num1, num2, num3;

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

  printf("enter multiplicand and limit of table seperated by space respectively\n");
  scanf("%d %d", &num1, &num2);
  print_multiplication_table(num1, num2);

  printf("Enter number and count separated by space respectively\n");
  scanf("%d %d", &num1, &num2);
  printf("the sum of numbers is %d\n", sum_of_numbers(num1, num2));
  printf("the product of numbers is %d\n", product_of_numbers(num1, num2));

  printf("Enter two numbers separated by space to print all odd in range\n");
  scanf("%d %d", &num1, &num2);
  print_odd_in_range(num1, num2);

  printf("Enter tow number and incrementer separated by space respectively\n");
  scanf("%d %d %d", &num1, &num2, &num3);
  print_nth_numbers(num1, num2, num3);

  printf("Enter two numbers separated by space to get sum of evens\n");
  scanf("%d %d", &num1, &num2);
  printf("the sum of even numbers is %d\n", sum_of_evens(num1, num2));

  printf("Enter a number to print all odds in revers till 1\n");
  scanf("%d", &number);
  print_reverse_odds(number);
}