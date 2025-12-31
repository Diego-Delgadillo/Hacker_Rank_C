#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    //almacena la cadena en array dinamico
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    //declaramos las variables de control
    int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;

/*
    for(int i = 0; i < strlen(s);i++){
        printf("\n%d -> %c",s[i],s[i]);
    }
*/



    //creamos un array dinamico para caracteres
    for(int i=0; i< strlen(s);i++){
        if(s[i] == '0'){n0+=1;}
        if(s[i] == '1'){n1+=1;}
        if(s[i] == '2'){n2+=1;}
        if(s[i] == '3'){n3+=1;}
        if(s[i] == '4'){n4+=1;}
        if(s[i] == '5'){n5+=1;}
        if(s[i] == '6'){n6+=1;}
        if(s[i] == '7'){n7+=1;}
        if(s[i] == '8'){n8+=1;}
        if(s[i] == '9'){n9+=1;}
    }
    printf("%d %d %d %d %d %d %d %d %d %d",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);

    return 0;
}
