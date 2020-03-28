#include<stdio.h>
#include<math.h>

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

int LCM(int num1, int num2) {
  return (num1 * num2) / GCD(num1, num2);
}

double simple_interest(double principal, double interest_rate, double time){
  return (principal*interest_rate*time)/100;
}

double compound_interest(double principal, double interest_rate, double time){
  return principal * pow((1 + interest_rate/100), time) - principal;
}

double fahrenheit_to_centigrade(double temperature) {
  return (temperature - 32) * 5 / 9;
}

int main(void) {
  int number, num1, num2;
  double ineterest_rate, time, principal, temperature;
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
  printf("enter two number separated by space to find LCM of them\n");
  scanf("%d %d", &num1, &num2);
  printf("LCM of %d and %d is %d\n", num1, num2, LCM(num1, num2));
  printf("enter principle, time(in years) and rate of interest accordingly to find simple interest\n");
  scanf("%lf %lf %lf", &principal, &time, &ineterest_rate);
  printf("the simple interest is %lf\n", simple_interest(principal, ineterest_rate, time));
  printf("enter principle, time(in years) and rate of interest accordingly to find compound interest\n");
  scanf("%lf %lf %lf", &principal, &time, &ineterest_rate);
  printf("the compound interest is %lf\n", compound_interest(principal, ineterest_rate, time));
  printf("enter a temperature in farenhite to convert to centigrade\n");
  scanf("%lf", &temperature);
  printf("the centigrade value is %lf\n", fahrenheit_to_centigrade(temperature));
}
