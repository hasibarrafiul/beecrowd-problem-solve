#include <stdio.h>
 int main() { 
    int n;
     scanf("%d", &n); 
     printf("%d:", n/3600);
     n %= 3600;
     printf("%d:", n/60);
     n %= 60;
     printf("%d\n", n/1);
     return 0;
     }
