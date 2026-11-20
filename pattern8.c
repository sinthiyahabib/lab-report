#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int i,j,num=65;
     for(i=0;i<n;i++)
     {
          for(j=0;j<n;j++)
          {
               printf(" %c",num);
               num++;
          }
          printf("\n");
     }

     return 0;
}
