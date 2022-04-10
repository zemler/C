/* LIBS */
#include <stdio.h>
#include <stdlib.h>

/* MAIN function */
int main()
{
    int num,div,sum= 0,q;
    printf("Give me your num: ");
    scanf("%d",&num);

    q = num;

    while(q!=0){
        div = q%10;
        sum = sum*10 +div;
        q = q/10;

    }
    if(sum == num){
        printf("Palindrom!");
    }
    else{
        printf("NOT Palindrom!");
    }
}
