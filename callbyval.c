#include<Stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp =*a;
    *a=*b; 
    *b=temp;
   
}
int main(){
    int a,b;
    printf("enter the number you want to swap");
    scanf("%d %d",&a,&b);

    swap(&a,&b);
    printf("a = %d,b= %d",a,b);


}