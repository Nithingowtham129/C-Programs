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
    int s;
    printf("enter element to search:");
    scanf("%d", &s);
    for(int i=0; i<n; i++)
    {
        if(ar[i] == s)
        {
            printf("element %d found at index %d",ar[i],i);
        }
    }
}   