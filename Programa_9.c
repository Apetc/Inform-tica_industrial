#include <stdio.h>
float capacidad_serie(float c1,float c2,float c3);
float capacidad_paralelo(float c1,float c2,float c3);

int main(){
    float capacidad1,capacidad2,capacidad3,c_s,c_p;
    printf("Escriba sus  3 capacidades: ");
    scanf("%f %f %f",&capacidad1,&capacidad2,&capacidad3);

    c_s = capacidad_serie(capacidad1,capacidad2,capacidad3);
    c_p = capacidad_paralelo(capacidad1,capacidad2,capacidad3);
    
    printf("En serie sus capacidad es: %f\nEn paralelo sus capacidad equivalente es: %f",c_s,c_p);
    return 0;
}
float capacidad_serie(float c1,float c2,float c3){
    float capacidad_equivalente;
    float A= 1/c1 + 1/c2 + 1/c3;
    capacidad_equivalente = 1/A;
    return capacidad_equivalente;

}
float capacidad_paralelo(float c1,float c2,float c3){
    float capacidad_equivalente = c1 + c2 + c3;
    return capacidad_equivalente;
}