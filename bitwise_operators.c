#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
//Reto con operadores logicos

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  //encontramos el valor de la operación con and

    /*
    int c = 0,d=0,e=0,f=0;
    c = n & k;//compuerta and
    d = n | k; //compuerta or
    e = n ^ k; //compuerta xor (or exclusivo)
    printf("\n%d & %d -> %d",n,k,c);
    printf("\n%d | %d -> %d",n,k,d);
    printf("\n%d ^ %d -> %d",n,k,e);*/

    //declaramos variables que encontrarán los maximos
    int maxAnd = -1,maxOr = -1, maxXor = -1, i = 0,j = 0;

  //hallamos el máximo de estas operaciones dado el conjunto de 2<= n <= 10^3
    for(i = 1; i<=k;i++){
        //implementamos algoritmo para iterar en el conjunto n
        //printf("\n",i);
        for(j = 1;j<=n;j++){
            if(i == j){
                continue;//salta ese ciclo
            }
            else{
                //calcula el maxAnd
                if(((i&j) > maxAnd) && (i&j < k)){maxAnd = i&j;}
                if(((i|j) > maxOr) && (i|j < k)){maxOr = i|j;printf("\nK=%d %d | %d -> %d",k,i,j,i|j);}
                if(((i^j) > maxXor) && (i^j < k)){maxXor = i^j;printf("\nK=%d %d ^ %d -> %d",k,i,j,i^j);}
            }
        }
    }
    //imprime valor mas alto encontrado
    printf("\nEl valor maximo de la operacion '&'es -> %d",maxAnd);
    printf("\nEl valor maximo de la operacion '|'es -> %d",maxOr);
    printf("\nEl valor maximo de la operacion '^'es -> %d",maxXor);


}

int main() {
    int n, k;


    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
