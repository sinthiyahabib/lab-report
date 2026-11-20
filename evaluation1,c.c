#include<stdio.h>
int main()
{
    int n;
    int i, j;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j%2==0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }

    for(i=n-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            if(j%2==0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }

    return 0;
}


