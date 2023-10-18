#include <stdio.h>

float media(float s1, float s2, float s3); //semestre 1 semestre 2 semestre3
int main(){
    float a,b,c, resultado;
    
    printf("Escriba las notas de cada semestre \n");

    scanf("%f %f %f",&a ,&b, &c);
    resultado = media(a,b,c);
    printf("Tiene de nota:%.1f\n",resultado);
    return 0;
}

float media(float s1, float s2, float s3){
    float demedia=(s1 + s2 + s3)/3;
    return demedia;
}