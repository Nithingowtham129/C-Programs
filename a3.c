#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the pattern:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
