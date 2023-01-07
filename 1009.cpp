#include<stdio.h>
int main(void){
    
    float A,B,TOTAL;
    char word[256];
    scanf("%s",word);
    scanf("%f %f",&A,&B);
    TOTAL=A+((B*15)/100);
    printf("TOTAL = R$ %.2f\n",TOTAL);
    return 0;
}
