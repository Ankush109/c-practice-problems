#include<stdio.h>
#include<math.h>
int main()
{
    int n= 4,sum=0;
    int count=0;
    int m=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    int a =m;
    while(m!=0)
    {
        int d =m%10;
        sum =sum + pow(d,count);
        m=m/10;

    }
    if(sum==a)
    {
        printf("armstrong number");
    }
    else{
    printf("you are a chutiya");
    }
}