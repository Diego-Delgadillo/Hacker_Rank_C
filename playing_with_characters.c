#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    //modificamos el valor de

    int suma = *a + *b;
    int resta = (*a > *b) ? (*a - *b): (*b-*a);
    *a = suma;
    *b = resta;

}


int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
