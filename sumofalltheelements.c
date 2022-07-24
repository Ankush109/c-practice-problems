#include<stdio.h>
#include<conio.h>
int main(){
    int n,i;
    int sum =0; ;
   
    printf("enter no of elements");
    scanf("%d",&n);
     int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   // summation of all the elements in the array :-
   for(i=0;i<n;i++){
     
       sum=sum+arr[i];
      
   }
   printf("the sum of all the elements in the array is %d",sum );
}