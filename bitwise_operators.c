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
    int maxAnd = 0,maxOr = 0, maxXor = 0, i = 0,j = 0;

  //hallamos el máximo de estas operaciones dado el conjunto de 2<= n <= 10^3
    for(i = 1; i<=n;i++){
        //implementamos algoritmo para iterar en el conjunto n
        for(j = 1;j<=n;j++){
            int andVal = i & j;
            int orVal = i| j;
            int xorVal = i ^ j;
            if(i == j){
                continue;//salta ese ciclo
            }
            else{
                //calcula el maxAnd
                if(andVal < k && andVal > maxAnd){maxAnd = andVal;}
                if(orVal < k && orVal > maxOr){maxOr = orVal;}
                if(xorVal < k && xorVal > maxXor){maxXor = xorVal;}
            }
        }
    }
    //imprime valor mas alto encontrado
    printf("%d",maxAnd);
    printf("\n%d",maxOr);
    printf("\n%d",maxXor);


}

int main() {
    int n, k;


    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
