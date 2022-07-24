#include <stdio.h>
int binarysearch(int arr[], int n, int key)
{
    int mid;
    int low = 0;
    int high = n;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("element found");
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 1;
}
int main()
{
    int n, i;
    printf("enter the number of elements");
    scanf("%d", &n);
    int arr[n];
    int key;
    printf("enter the elements in the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element you want to find using binary search");
    scanf("%d", &key);
   int rem=  binarysearch(arr,n,key);
   printf("%d",rem);

}