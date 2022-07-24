#include<stdio.h>
#include<conio.h>
int main(){
    int n,i;
   
    printf("enter no of elements");
    scanf("%d",&n);
     int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n;i>1;i--){
        printf("elements in reverse order are as follows");
        printf("%d",arr[i]);
    }
}