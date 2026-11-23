#include<stdio.h>
int main()
{
     int a,b,c;
      printf("Enter a,b,c:");
     scanf("%d%d%d",&a,&b,&c);


     if((a>b && a<c)||(a>c && a<b))
     {
          printf("a 2nd largest");
     }
     else if((b>a && b<c)||(b<a && b>c))
     {
          printf("b 2nd largest");
     }
      else
      {
           printf("c 2nd largest");
      }

     return 0;
}
