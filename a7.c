#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the arrays");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int even,odd;
    for(int i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }
    printf("even = %d, odd = %d",even,odd);
}