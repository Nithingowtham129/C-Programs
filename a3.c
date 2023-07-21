#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d", &n);
    int ar[n];
    printf("enter array elements:");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i]==ar[j])
            {
                printf("the duplicate element is %d",ar[i]);
            }
        }
    }
}