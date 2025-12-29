#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  //accedemos a las calificaciones que tiene el apuntador de marks -> calificaciones
  if(number_of_students <= 1){
    return 0;
  }
  else{
      int elemento = 0;
      int ultimoElemento = marks[number_of_students-1];
      int suma = 0;

      //analiza si es girl (g) or boy (b)
      if(gender == 'b'){
        suma = marks[0];
        for(int i = 1; i <= number_of_students; i+2){
            elemento = marks[i];
            suma += elemento;
        }
        return suma;
      }

      else if(gender == 'g'){
        suma = marks[0];
        for(int i = 0; i <= number_of_students; i+2){
            elemento = marks[i];
            suma += elemento;
        }
        return suma;
      }
  }

  /*
  //usamos el método abreviado o un poco más reducido con operador ternario
  int primerElemento = marks[0];
  int ultimoElemento = marks[number_of_students-1];
  return number_of_students <= 1 ? 0 : primerElemento + ultimoElemento;*/
    return 0;
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}


