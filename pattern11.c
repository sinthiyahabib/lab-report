#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int i,j;
      for(i=1;i<=n;i++)
      {
           int num=1;
           for(j=1;j<=i;j++)
           {
                printf("%d",num);
                num++;

           }
           printf("\n");
      }


     return 0;
}
