#include <stdio.h>
int factorial(int n )
{
    int fact =1;
    for(int i=1;i<=n;i++){
    
    fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k <=n; k++)
        {
            printf("  ");
        }
        int coeff;
        for (int j = 0; j <= i; j++)
        {
            
            coeff = factorial(i) / (factorial(j) * factorial(i - j));
             printf("%3d ",coeff);
        }
        printf("\n");
    }
  
}