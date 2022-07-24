#include <stdio.h>
int main()
{
    int n;
    int i;
    printf("enter array size");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements in the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {

        if (arr[0] < arr[i]) 
        {
            arr[0] = arr[i];
        }
       
    }
     printf("the highest number in the array is %d", arr[0]);
}