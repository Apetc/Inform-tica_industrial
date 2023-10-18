#include <stdio.h>

int main(){
    float rpm, w; //w = rad/s, rpm = revoluciones por minuto
    printf("revoluciones por minuto del sistema \n");
    scanf("%f",&rpm);
    w = 0.1047197*rpm; //w = 2π/60 x 3000 rpm
    printf("Equivale a %.4frad/s",w);
}