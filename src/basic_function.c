#include<stdio.h>

unsigned char is_even(int number) {
  return number % 2 == 0;
}

int main(void) {
  int number;
  printf("enter a number\n");
  scanf("%d", &number);
  printf("%d is %s \n", number, is_even(number) ? "Even" : "Not even");
}
