#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,n,*oldArray;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    oldArray = (int*) malloc(num * sizeof(int));

    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

    n = num;
    for(i = 0; i < num;i++){
        n-=1;
        oldArray[i] = arr[n];
    }
    //ahora copiamos datos del array espejo al array final
    for(i = 0; i < num;i++){
        arr[i] = oldArray[i];
    }


    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
