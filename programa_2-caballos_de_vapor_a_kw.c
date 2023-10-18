#include <stdio.h>

int main(){
    float Cdevapor, Kw; //caballos de vapor, kilovatios
    printf("Introduzca los caballos de vapor de su sistema \n");
    scanf("%f",&Cdevapor);
    Kw = Cdevapor*0.7355;
    printf("Su equivalencia en kilovatios es de: %.2f",Kw);

}