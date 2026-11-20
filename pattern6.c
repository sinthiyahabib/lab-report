#include<stdio.h>
int main()
{
    int i,j,n=3,num=1;
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
         {
              printf("%d",num);
              num++;
         }
         printf("\n");
    }
     return 0;
}
