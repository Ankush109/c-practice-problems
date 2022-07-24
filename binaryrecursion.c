#include <stdio.h>
int recursion(int a[], int low, int high, int x)
{
    printf("low : %d high : %d\n", low, high);
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (x > a[mid])
        {
            recursion(a, mid + 1, high, x);
        }
        else if (x < a[mid])
        {
            recursion(a, low, mid - 1, x);
        }
        else
        {
            return 1;
        }
    }
    else
        return 0;
}
int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    
    if (recursion(a, 0, n - 1, 90))
    {
        printf("Present");
    }
    else
        printf("absent");
    return 0;
}
// 10 20 30 90 
// 0   1  2  3  