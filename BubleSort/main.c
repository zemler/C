/* NECESSERY LIBS */
#include <stdio.h>
#include <stdlib.h>


/* CONST Array length */
#define LEN 5


/* Main Code */
int main()
{
    /* Creating Array with random elements */
    int number;
    int arr[LEN];
    for(int i=0;i<LEN;i++){
        number = rand()%30;
        arr[i] = number;

    }

    /* Printing array before sort */
    printf("BEFORE SORT:\n");
    for(int j=0;j<LEN;j++){
        printf("%d,",arr[j]);
    }

    /* SORT */
    for(int x = 0; x<LEN;x++){
        for(int z = 0;z<LEN-1;z++){
            if(arr[z]>arr[z+1]){
                int tmp = arr[z];
                arr[z] = arr[z+1];
                arr[z+1] = tmp;
            }
        }
    }
    /* Print After Sort */
    printf("\nAFTER SORT:\n");
    for(int y = 0;y<LEN;y++){
        printf("%d,",arr[y]);
    }
}
