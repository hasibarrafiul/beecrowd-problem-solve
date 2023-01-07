#include<stdio.h>
int main(){
    int x,y,i,temp=0;
    scanf("%d%d",&x,&y);
    for(i=(y+1);i<x;i++){
        if(i%2!=0){
            temp=temp+i;
        }
    }
    printf("%d\n",temp);
    return 0;
}
