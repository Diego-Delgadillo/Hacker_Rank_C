#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);


    //primer método
    int c1,c2,c3,c4,c5,sum;/*
    c1 = n / 10000;
    n = n % 10000; printf("->%d",n);
    c2 = n / 1000;
    n = n % 1000;printf("->%d",n);
    c3 = n / 100;
    n = n % 100;printf("->%d",n);
    c4 = n / 10;
    n= n % 10;printf("->%d",n);
    c5 = n;
    printf("->%d",c5);


    sum = c1+c2+c3+c4+c5;

    printf("\n%d\n%d\n%d\n%d\n%d\nSuma -> %d",c1,c2,c3,c4,c5,sum);
*/
    //Código alterno y reducido jej
    int c1 = 0, sum = 0;
    for(int i = 100000;i>=10;i++){
        i /= 10;
        c1 = n / i;
        n = n % i;
        sum+=c1;
        printf("\n%d",sum);
    }

    printf("\n\n%d",sum);

    return 0;
}
