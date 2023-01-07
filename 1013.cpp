#include<stdio.h>
int main(void){
    int A,B,C,maior;
    scanf("%d %d %d",&A,&B,&C);
    if(A>B&&A>C){
        maior=A;
    }
    else if(B>C){
        maior=B;
    }
    else{
        maior=C;
    }
    printf("%d eh o maior\n",maior);
    return 0;
}
