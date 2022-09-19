#include <stdio.h>

int main() {
  int num;
  int odd = 0;
  int even = 0;
  int count = 1;
  float mod;
  
  scanf("%d",&num);
  while (count <= num){
    mod = count % 2;
    if( mod > 0){
     odd += count;
   }
    else{
    even += count;
      
    }
    count++;
  }
    
  printf("%d\n", even);
  printf("%d\n", odd);
    
return 0;
}


