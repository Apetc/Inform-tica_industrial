#include <stdio.h>
#include <math.h>

int main(){
    float operation; //el ejercicio se hacia siendo como son, ej: 4/7 + 5*4-2: 0 + 20 -2 0 =18

    operation = 4/7+5*4-2;
    printf("a: %lf\n", operation);
     operation = (4+3)/2-5*(3-4);
    printf("b: %lf\n", operation);
     operation = 3+4/7*(2+6)-(8-9)/4*3+5/2;
    printf("c: %lf\n", operation);
     operation = (1-2)/(3+4)*5/6-7-8/9*10/11;
    printf("d: %lf\n", operation);
     operation = 5%(3-2)+27%5-2/4*3-2*11;
    printf("e: %lf\n", operation);
     operation = fmod(9,sqrt(36))-pow(2,8)*36/(6+3);
    printf("f: %lf\n", operation);
     operation = fmod(9,sqrt(25)/pow(2,8)*36/(6+3));
    printf("g: %lf\n", operation);
     operation = 1+2/3<4-5/6;
    printf("h: %lf\n", operation);
     operation = 2+7/8*5<4-3*0.1;
    printf("i: %lf\n", operation);
     operation = 3+9/8*7-2!=1+7*9/8;
    printf("j: %lf\n", operation);
     operation = 5<7 || 9==8;
    printf("k: %lf\n", operation);
     operation = 6.5<=7&&8.7!=9;
    printf("l: %lf\n", operation);
    operation = 6>7&&!(8!=9);
    printf("m: %lf\n", operation);
    operation = 9.3+4.2<=7*1.2&&2.4+7/(1.5+327)*5>0.5*2/(3-4);
    printf("n: %lf\n", operation);
}