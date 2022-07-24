#include <stdio.h>

int main()
{
    int i, j, n;
    printf("enter the size of the array");
    scanf("%d", &n);
    int arr[n];
    printf("enter your elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        int indexofmin = i;
        // 0 1 2 3 4 5 
        // 5 4 3 2 1 9
        
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexofmin])
            {
                indexofmin = j;
            }
           
        }
         
            int temp = arr[i];
            arr[i] = arr[indexofmin];
            arr[indexofmin] = temp;
    }
    printf("after selection sort the array is :- ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}