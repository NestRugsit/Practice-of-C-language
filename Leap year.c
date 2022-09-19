#include <stdio.h>

int main() {
  int year;
  int mod ;
  scanf ("%d",&year);

  if ( year < 0){
    year = (year*-2)/2;
    
  }

  mod = year % 400;
  
  if(mod > 0){
    printf("%d is not a leap year.",year);
    return  0;
  }

  mod = year % 100;
  if (mod > 0){
    printf("%d is a leap year.",year);
    return  0;
  }

  mod = year % 400;
  if(mod == 0){
    printf("%d is a leap year.",year);
    return  0;
  }
  else;
    printf("%d is not a leap year.",year);


  
  }
  
 