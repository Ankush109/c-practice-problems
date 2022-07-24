#include<stdio.h>
int main(){
    int i,n,key,p=0;
    printf("enter the number of elements in the array ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element you want to insert in the array!");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key<arr[i])
        {
            p=i;
            break;
        }
        else{
                p=i+1;

        }
    }
    // now shift all the rest of the elements after the possition of insertion to the right of the array
    for(int i=n+1;i>=p;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[p]=key;
    // now the key is inserted in the array in correct sorted position , now just print the array
    printf("after the key being inserted the array list is as :-");
    for(int i=0;i<n+1;i++)

    {
        printf(" %d",arr[i]);
    }

}