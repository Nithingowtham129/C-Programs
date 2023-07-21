#include <stdio.h>

int main()
{
    int n,i,j;
    printf("enter the size of the matrix:");
    scanf("%d",&n);
    int rowmin=1,rowmax=n,colmin=1,colmax=n;
    int count=1;
    int arr[n][n];
    while(rowmin<=rowmax)
    {
        for(i=colmin;i<=colmax;i++)
        {
            arr[rowmin][i]=count++;
        }
        for(i=rowmin+1;i<=rowmax;i++)
        {
            arr[i][colmax]=count++;
        }
        for(i=colmax-1;i>=colmin;i--)
        {
            arr[rowmax][i]=count++;
        }
        for(i=rowmax-1;i>=rowmin+1;i--)
        {
            arr[i][colmin]=count++;
        }
        rowmin++,rowmax--,colmin++,colmax--;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
