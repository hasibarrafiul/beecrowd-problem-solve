#include <stdio.h>

    int main()
    {
        int i,j;
        scanf("%d%d",&i,&j);
        if(i>j){
        if(i%j==0){
            printf("Sao Multiplos\n");
        }
        else{
            printf("Nao sao Multiplos\n");
        }
    }
    else{
            if(j%i==0){
            printf("Sao Multiplos\n");
        }
        else{
            printf("Nao sao Multiplos\n");
        }

    }
    return 0;
    }
