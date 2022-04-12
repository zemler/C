#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, rest, q, sum=0, smallSum;

    printf("NUMBER: ");
    scanf("%d", &num);

    q = num;

    while(q!=0){
        rest = q%10;
        sum = sum+(rest*rest*rest);
        q = q/10;


    }
    printf("%d\n",sum);
    if(num==sum){
        printf("Armstrong number!");
    }
    else{
        printf("No Amstrong number!");
    }
}
