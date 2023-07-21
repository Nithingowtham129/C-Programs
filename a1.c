#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i, j, t, p = 0;
    printf("enter target value:");
    scanf("%d", &t);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == t)
            {
                printf("pair found (%d,%d)\n", arr[i], arr[j]);
                p = 1;
            }
        }
    }
    if (p == 0)
        printf("pair not found");
}