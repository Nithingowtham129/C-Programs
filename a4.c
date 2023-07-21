#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    int ar[n];
    printf("enter array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > temp)
        {
            temp = ar[i];
        }
    }
    printf("the peak element is %d", temp);
}