#include <stdio.h>
#define porc_trabajo 0.30
#define porc_examen 0.60
#define porc_en_casa 0.10

int main(){
    //Porcentaje para calcular las notas de la primera evalución, donde trabajo es 30%, examen 60% y trabajo en casa el resto.
    float Pporc_trabajo=porc_trabajo;
    float Pporc_examen= porc_examen;
    float Pporc_en_casa= porc_en_casa;

    float Primera_evaluacion,trabajo,examenes,en_casa;
    int cantidad_examenes;
    printf("cuantos examenes tuviste este semestre");
    scanf(" %i",&cantidad_examenes);
    printf(" Escribe las notas de los examenes ");
    for(int i=0;i<cantidad_examenes;i++){
         float temp_examen;
            scanf("%f",&temp_examen);
            examenes = temp_examen + examenes;
    }
    printf("Escribe la nota del trabajo ");
    scanf(" %f",&trabajo);
    printf("Escribe trabajo en casa ");
    scanf(" %f",&en_casa);
    Primera_evaluacion = Pporc_trabajo*trabajo + (Pporc_examen*examenes)/cantidad_examenes + Pporc_en_casa*en_casa;

    printf("La nota media de la primera evaluacion es de %.1f",Primera_evaluacion);
    return 0;
}