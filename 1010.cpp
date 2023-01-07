#include <stdio.h> 
int main() { 
    int a, b; 
    double c, res,res2,res3;
    scanf("%d %d %lf", &a, &b, &c);
    res = b * c; 
    scanf("%d %d %lf", &a, &b, &c); 
    res2 = b * c; 
    res3=res+res2;
    printf("VALOR A PAGAR: R$ %.2lf\n", res3);        
    return 0;
 }
