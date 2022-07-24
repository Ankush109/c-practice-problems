#include<stdio.h>
int main ()
{
    int n,rem=0,result=0;
    printf("enter a number");
    scanf("%d",&n);
    int m=n;
    while(n!=0)
    {
        rem=n%10;
        result=result*10+rem;
        n=n/10;
    }
    if(result==m)
    {
        printf("Given number is Palindrome number");
    }
    else{
        printf("not palindrome number");
    }
}