#include <stdio.h>
#include <math.h>

int main() {
  float a,b,c,sum,sq ;
  scanf(" %f  %f  %f",&a,&b,&c);
  if( a == 0.0000){
    sq = (c*c)-(b*b);
      sum = sqrt (sq);
      }
  else if( b == 0.0000){
    sq = (c*c)-(a*a);
      sum = sqrt (sq);
  }
  else if( c == 0.0000){
    sq = (a*a)+(b*b);
      sum = sqrt (sq);
  }

    printf("%.2f",sum);
  
  }
