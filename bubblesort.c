#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=0;i<=n-1;i++) // 0 1 2 3 4 5 
                       // 6 7 2 3 2 1
   {
       for(int j=0;j<=n-1-i;j++)
       {
           if(arr[j]>arr[j+1])
           {
                // swap logic
                int temp;
                temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
           }
       }
   }
   for(int i=0;i<n;i++)
   {
       printf("%d",arr[i]);
       
   }
}