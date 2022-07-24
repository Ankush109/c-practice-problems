#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter the size of array");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements !");
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("after deleting duplicate elements in the array!");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}