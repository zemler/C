#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void PassGenerate(int length){

    char Nums[] = {'0','1','2','3','4','5','6','7','8','9','0'};
    char letters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','q','p','r','s','t','u','v','w','y','z','x'};
    char LETTERTS[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','Q','P','R','S','T','U','V','W','Y','Z','X'};
    char Specials[] = {'!','@','#','$','%','^','&','*','(',')'};
    char pass[length];

    for(int i=0;i<length;i++){
        int random = rand()%4;
        if(random==1){
            int randomTabN = rand()%11;
            pass[i] = Nums[randomTabN];
        }
        if (random==2){
            int randomTabl = rand()% 26;
            pass[i] = letters[randomTabl];
        }
        if(random==3){
            int randomTabL = rand()%26;
            pass[i] = LETTERTS[randomTabL];
        }
        if(random==4){
            int randomSpec = rand()%10;
            pass[i] = Specials[randomSpec];
        }


    }
    for(int a=0;a<length;a++){
        printf("%c",pass[a]);
    }

}


int main()
{
    int dl = 20;
    PassGenerate(dl);
}
