#include<stdio.h>

int main(void)

{

    int x,y;
    float z;
    scanf("%d%d",&x,&y);
    if(x==1)
        z=y*4;
    else if(x==2)
        z=y*4.5;
    else if(x==3)
        z=y*5;
    else if(x==4)
        z=y*2;
    else if(x==5)
        z=y*1.5;
    printf("Total: R$ %.2f\n",z);

    return 0;

}
