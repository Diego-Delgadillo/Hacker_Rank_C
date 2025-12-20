#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);


    if(a)
  	//para el caso donde se analiza "a"
      for(int i = a; i<=b;i++){
        if(i == 1){printf("one\n");}
        if(i == 2){printf("two\n");}
        if(i == 3){printf("three\n");}
        if(i == 4){printf("four\n");}
        if(i == 5){printf("five\n");}
        if(i == 6){printf("six\n");}
        if(i == 7){printf("seven\n");}
        if(i == 8){printf("eight\n");}
        if(i == 9){printf("nine\n");}
      }


    //bucle que determina si es par o impar en el caso de que el número se salga del intervalo
    if(b > 9){
        for(int i = 10; i <= b;i++){

            if(i % 2 == 0){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }/*
            //probamos con operador ternario
            i % 2 == 0 ? printf("even\n") : printf("odd\n");*/
        }
    }

    return 0;
}
