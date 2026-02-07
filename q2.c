#include <stdio.h>

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter position: ");
    scanf("%d", &pos);

    int arr2[n-1];
    for(int i=0;i<pos;i++)
    {
        arr2[i]=arr[i];
    }
    for(int i=pos;i<n-1;i++)
    {
        arr2[i]=arr[i];
    }
printf("Array after deletion:\n");
    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}