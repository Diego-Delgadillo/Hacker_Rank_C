#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

  	//para el caso donde se analiza "a"
  	for(int i = 0; i<9;i++){
        if(i == 1 && (a == 1 || b ==1)){printf("\n%sone");}
        if(i == 2 && (a == 2 || b ==2)){printf("\n%stwo");}
        if(i == 3 && (a == 3 || b ==3)){printf("\n%sthree");}
        if(i == 4 && (a == 4 || b ==4)){printf("\n%sfour");}
        if(i == 5 && (a == 5 || b ==5)){printf("\n%sfive");}
        if(i == 6 && (a == 6 || b ==6)){printf("\n%ssix");}
        if(i == 7 && (a == 7 || b ==7)){printf("\n%sseven");}
        if(i == 8 && (a == 8 || b ==8)){printf("\n%seight");}
        if(i == 9 && (a == 9 || b ==9)){printf("\n%snine");}
    }

    //caso donde sale del intervalo
    if(a > 9 || b > 9){
        printf("\n%snine");
    }
    //determina si es par o impar
    if(a%2 == 0){
        printf("\n%seven");
    }
    else{
        pritnf("\n%sodd")
    }

    if(b%2 == 0){
        printf("\n%seven");
    }
    else{
        pritnf("\n%sodd")
    }


    return 0;
}
