#include<stdio.h>
int main()
{
     int n=4,i,j;
     for(i=0;i<n;i++)
     {
          char ch='a';
         for(j=0;j<n;j++)
         {
              printf(" %c",ch);
              ch=ch+1;
         }
         printf("\n");
     }
     return 0;
}
