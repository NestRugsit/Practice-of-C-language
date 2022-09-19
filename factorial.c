#include <stdio.h>

int main() {
double num;
double fact = 1;
    scanf("%lf",&num);
  while (num >= 1){
    fact *= num;
    num --;
  }
printf("%.0lf",fact);
  }