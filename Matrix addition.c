#include <stdio.h>

int main() {
  int num[9];
  int num2[9];
  int num3 [9];
  for(int i=0;i < 9; i++){
    scanf("%d",&num[i]);
    }

  
  for(int j=0;j < 9; j++){
    scanf("%d",&num2[j]);
    }

  
  for(int k=0;k < 9; k++){
    num3 [k] = num[k] + num2[k];
    
    }

  
  for(int l=0;l < 9; l++){
  printf("%d ", num3[l]);
    if( l == 2 || l== 5){
      printf("\n");
    }
}

  }
