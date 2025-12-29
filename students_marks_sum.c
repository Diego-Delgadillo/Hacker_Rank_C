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
    int elemento = 0, suma = 0;

    if(gender == 'g'){
        for(int i = 0; i< number_of_students;i++){
            //printf("\n%d",marks[i]);
            if(i % 2 != 0){
                suma += marks[i];
            }
        }
    return suma;
    }

    else{
        for(int i = 0; i<= number_of_students;i++){
            //printf("\n%d",marks[i]);
            if(i % 2 == 0){
                suma += marks[i];
            }
        }
        return suma;
    }
  }
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


