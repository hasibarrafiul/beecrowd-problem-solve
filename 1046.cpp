#include<stdio.h>
int main(){
   int a,b,r,r2;
   scanf("%d%d",&a,&b);
   if(a>b){
        r=(24-a);
        r2=r+b;
    printf("O JOGO DUROU %d HORA(S)\n",r2);
   }
   else if(a==b){
    printf("O JOGO DUROU 24 HORA(S)\n");
   }
   else{
    printf("O JOGO DUROU %d HORA(S)\n",b-a);
   }

   return 0;
}
