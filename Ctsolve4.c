#include<stdio.h>
int main()
{
     int a,b,c;
     printf("Enter angle a,b,c:");
     scanf("%d%d%d",&a,&b,&c);
     if(a+b+c!=180)
     {
          printf("Invalid");
     }
     else if ((a<90) && (b<90) && (c<90))
     {
          printf("Acute Triangle");
     }
     else if ((a==90) || (a==90) || (a==90))
     {
          printf("Right Triangle");
     }
     else if ((a>90) || (b>90) || (c>90))
     {
          printf("Obtuse Triangle");
     }


     return 0;
}
