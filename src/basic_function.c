#include<stdio.h>

unsigned char is_even(int number) {
  return number % 2 == 0;
}

unsigned char is_odd(int number) {
  return ! is_even(number);
}

int main(void) {
  int number;
  printf("enter a number to check if it is even\n");
  scanf("%d", &number);
  printf("%d is %s \n", number, is_even(number) ? "even" : "Not even");
  printf("enter a number to check if it is odd\n");
  scanf("%d", &number);
  printf("%d is %s \n", number, is_odd(number) ? "odd" : "Not odd");
}
