#include<stdio.h>
int main()
{
     int a,i,count=0;
     printf("Enter the number:");
     scanf("%d",&a);

     if(a<0)
     {
          printf("Enter a positive number.");
     }
      for(i = 1; i <= a; i++){
        if(a % i != 0){
            count++;
        }
    }

    if(count == (a - 2)){
        printf("This number %d is prime number", a);
    }
    else{
        printf("This number %d is not a prime number", a);
    }

    return 0;


}
