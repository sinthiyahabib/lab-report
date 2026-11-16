#include<stdio.h>
int main()
{
     int a,i,fact=1;
     printf("Enter the number:");
     scanf("%d",&a);

     if(a<0)
     {
          printf("Enter a positive number.");
     }
     else
         {
              for(i=1;i<=a;i++)
     {
          fact=i*fact;


     }
      printf("The value of %d factorial is=%d\n",a,fact);
     }
     return 0;
}
