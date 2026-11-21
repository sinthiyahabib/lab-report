#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int i,j,num=65;

     for(i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++)
          {
               printf(" %c",num);
          }
          printf("\n");
          num++;
     }
     return 0;
}

