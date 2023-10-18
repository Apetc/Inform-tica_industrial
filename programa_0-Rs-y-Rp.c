/*Inicio

*/

#include <stdio.h>

int main(){
    float Rs,R1,R2,R3,Rp,Aux; //resistencias equivalentes en serie, paralelo
    printf("Introduce uno a uno las resistencias de su sistema:\n");
    scanf("%f %f %f", &R1,&R2,&R3);
    Rs = R1 + R2+ R3;
    Aux = 1/R1 + 1/R2 + 1/R3;
    Rp = 1/Aux;
    printf("Tu resistencia en serie es igual a:\n%.3f ohmios\nTu resistencia en paralelo es igual a:\n%.3f ohmios\n",Rs,Rp);
}