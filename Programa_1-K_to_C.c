#include <stdio.h>

int main(){
    float celsius, kelvin;
    printf ("Introduzca un valor en kelvin\n");
    scanf("%f",&kelvin);
    celsius = kelvin - 273.15;
    printf("La conversion a celsius es:%.1fCelsius", celsius);
}