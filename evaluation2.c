#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int evensum = 0, oddsum = 0;
      for (i=1; i<= n; i++)
          {
        if (i % 2 == 0)
          {
            evensum=evensum+i;
          }
        else
        {
            oddsum=oddsum+i;
        }
        }
    printf("Sum of Even Number=%d\n",evensum);
    printf("Sum of Odd Number=%d\n",oddsum);

    return 0;
}

