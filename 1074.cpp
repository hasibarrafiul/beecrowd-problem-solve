#include <stdio.h>
#include <math.h>

int main()
{
    int i,n,p;
      scanf("%d",&p);
    for(i=1;i<=p;i++){
        scanf("%d",&n);
        if(n!=0){
        if(n%2==0){
                if(n>0){
                   printf("EVEN POSITIVE\n");
                }
                else{
                   printf("EVEN NEGATIVE\n");
                }
        }
        else if(n%2!=0){
                if(n>0){
                    printf("ODD POSITIVE\n");
                }
                else{
                    printf("ODD NEGATIVE\n");
                }
        }
            }
        else{
            printf("NULL\n");
        }
    }
    return 0;
}
