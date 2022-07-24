#include<stdio.h>
int main(){
    int i,j,n,c;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    int f[100];
    for(int i=0;i<n;i++)
    {   
        scanf("%d",&arr[i]);
                f[i]=-1;

    }
   
    for(i=0;i<n;i++)
    {
        c=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                f[j]=0;

            }
           
        }
         if(f[i]!=0)
            {
                f[i]=c;

            }
    }
    for(int i=0;i<n;i++)
    {
        if(f[i]!=0)
        {
        printf("%d occured %d times",arr[i],f[i]);
        }
    }
}