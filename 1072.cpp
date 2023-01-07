#include <stdio.h>

int main()
{
    int i,n,p,k=0,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&p);
        if(p>=10&&p<=20){
            k=k+1;
        }
        else{
            j=j+1;
        }
    }
    printf("%d in\n",k);
    printf("%d out\n",j);
    return 0;
}
