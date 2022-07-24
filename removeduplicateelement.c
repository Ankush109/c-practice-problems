#include<stdio.h>
void transfer(int arr[],int j ,int c ,int n);
void display(int arr[],int c,int n);
int main(){
    int n,i;
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int  c=0;
    for(int i=0;i<n-c;i++)
    {
        for(int j=i+1;j<n-c;j++)
        {
            if(arr[i]==arr[j])
            {
                transfer(arr,j,c,n);
                c++;
            }
        }
    }
    display(arr,c,n);
}
// 1 2 3 3 3
// 0 1 2 3 4
void transfer(int arr[],int j ,int c ,int n)
{
    for(int i=j;i<n-c;i++){
        arr[i]=arr[i+1];
    }
}
void display(int arr[],int c,int n){
    printf("the array after deleting");
    int i;
    for(int i=0;i<n-c;i++)
    {
        printf("%d",arr[i]);
    }
}