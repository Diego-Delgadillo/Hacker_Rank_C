#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int c1,c2,c3,c4,c5,sum;
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


    return 0;
}
