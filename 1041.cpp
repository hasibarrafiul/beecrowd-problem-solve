#include <stdio.h>

int main(void)
{
    float x,y;
    scanf("%f%f",&x,&y);
    if(x==0.00&&y==0.00){
        printf("Origem\n");
    }
    else if(x==0.00){
        printf("Eixo Y\n");
    }
    else if(y==0.00){
        printf("Eixo X\n");
    }
    else if(x>0){
        if(y>0){
            printf("Q1\n");
        }
        else{
           printf("Q4\n");
        }
    }
    else if(x<0){
        if(y>0){
            printf("Q2\n");
        }
        else{
            printf("Q3\n");
        }
    }
    else if(y>0){
        if(x>0){
            printf("Q1\n");
        }
        else{
           printf("Q2\n");
        }
    }
    else if(y<0){
        if(x>0){
            printf("Q4\n");
        }
        else{
            printf("Q3\n");
        }
    }

    return 0;
}
