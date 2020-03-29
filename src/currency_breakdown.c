#include<stdio.h>

int print_and_get_remaining(int current_currency,int total) {
  int count = total/current_currency;
  int remaining = total % current_currency;
  count ? printf("%d x Rs %d\n", count, current_currency) : 0;
  return remaining;
}

void print_breakdown_values(int total) {
  int remaining = total;
  remaining = print_and_get_remaining(2000, remaining);
  remaining = print_and_get_remaining(500, remaining);
  remaining = print_and_get_remaining(200, remaining);
  remaining = print_and_get_remaining(100, remaining);
  remaining = print_and_get_remaining(50, remaining);
  remaining = print_and_get_remaining(10, remaining);
  remaining = print_and_get_remaining(5, remaining);
  remaining = print_and_get_remaining(1, remaining);
}

int main(void) {
  int total;
  printf("enter total amount\n");
  scanf("%d", &total);
  print_breakdown_values(total);
  return 0;
}