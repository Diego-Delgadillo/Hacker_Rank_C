#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    printf("\n\n");

    int i = 1, j = 1;
  	//bucle filas
  	for(i = 1;i<=(n*2)-1;i++){
        printf("\n");
        //bucle columnas
        for(j=1;j<=(n*2)-1;j++){
            if(j == 1 || j == (n*2)-1 || i == 1 || i == (n*2)-1){
                printf("%d ",n);
            }
            else{
                if(j > n){printf("%d ",j-(n-1));}
                else{
                   printf("%d ",(n+1)-j);
                }
            }
        }

  	}





    return 0;
}
