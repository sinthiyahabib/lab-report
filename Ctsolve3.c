#include<stdio.h>
int main()
{
     int a,b,c;

      printf("Enter a,b,c:");
     scanf("%d%d%d",&a,&b,&c);

     if((a+b<c) || (b+c<a) || (c+a<b))
     {
           printf("Invalid Triangle");
     }
     else
          if(a==b==c)
     {
          printf("Equilateral Triangle");
     }
           else if((a==b)|| (b==c) || (a==c))
           {
                printf("Isosceles Triangle");
           }
           else
           {
                printf("Scalene Triangle");
           }

     return 0;
}
