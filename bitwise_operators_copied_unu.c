#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("\n\n");


    //codigo para ejecutar
    for(int i = 1; i<n+1;i++){
        for(int up = 1; up<i;up++){
            printf("%d ",n - up + 1);
        }
        for(int j = i;j<(2*n)-i+1;j++){
            printf("%d ",n - i + 1);
        }
        for(int lp = 2 * n - i;lp < 2 * n - 1;lp++){
            printf("%d ",lp - n + 2);
        }
        printf("\n");
    }


    //segunda parte
    for(int i = n-1; i > 0; i--){
        for(int up = 1; up < i;up++){
            printf("%d ",n - up + 1);
        }
        for(int j = i; j < 2 * n - i + 1;j++){
            printf("%d ",n - i + 1);
        }
        for(int lp = 2 * n - i;lp < 2 * n -1;lp++){
            printf("%d ",lp - n + 2);
        }
        printf("\n");
    }

    return 0;
}
