#include <stdio.h>
int main()
{
    int n,i, terget;

    scanf("%d", &n);
    scanf("%d", &terget);

    if(terget > n){
        printf("Terget value must be smaller by %d", n);
        return 0;
    }

    for( i = 1; i <= n; i++){
        if(i == (terget + 1)){
            break;
        }
        printf("%d\n", i);
    }


    return 0;
}
