#include<stdio.h>
int main() {
      double fn, sn, tmp;
      printf("Enter first number: ");
      scanf("%lf", &fn);
      printf("Enter second number: ");
      scanf("%lf", &sn);
      //Value of fn is assigned to tmp
      tmp = fn;
      //Value of sn is assigned to fn
      fn = sn;
      //Value of tmp(initial value of fn) is assigned to sn
      sn = tmp;
      printf("\nAfter swapping, First Number = %.2lf\n", fn);
      printf("After swapping, Second Number = %.2lf", sn);
      return 0;
}
