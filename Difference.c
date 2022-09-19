#include<stdio.h>
 
int main()
{   
    int n;
    int num;
    int i;
    int max;
    int min;
    int sum;
     
    scanf("%d", &n);
  
     
    for(i = 0; i < n; i++)
    {
    
        scanf("%d", &num);
         
        if(i==0 || num > max)
        {
            max = num;
        }
        if(i ==0 || num < min)
        {
            min = num;
        }
    }
     sum = max - min;

    printf("%d", sum);
     
    return 0;
}