#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]); // 9  8 7 3 1

    }
    for(i=1;i<n;i++)
    {
        int current;
        current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0) // 12 32 23 44 32>12
        {
           
            arr[j+1]=arr[j]; 
            j--;
        } 
            arr[j+1]=current;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}