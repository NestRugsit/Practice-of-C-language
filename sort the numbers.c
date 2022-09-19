#include <stdio.h>

int main() {
int n= 10;
int arr [n];
int i,j;
int sum,sum2;
   j = 0;

  for(int i =0;  i<  n; i++)
    {
        scanf("%d", & arr [i]);
    }
 i = 0;
    do
    {
        if(i < n-1 && arr[i] > arr[i+1])
        {
            sum = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = sum;
            i = 0;
        }
        else
        {
            i++;
        }
         
    }while(i < n);



  
    for(int k = 0; k < n; k++){
      printf("%d ",arr [k]);
    }
    printf("\n");
  
    for(int o = 0; o < n; o++){
      printf("%d ",arr [9-o]);
    }
  
  }
  
 